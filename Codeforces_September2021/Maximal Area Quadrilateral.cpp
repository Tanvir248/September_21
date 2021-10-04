#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const db eps = 1e-10;  
const db pi = acos(-1.0);
const int inf = 0x3f3f3f3f;
const int maxn = 300 + 5;
 
inline int dcmp(db x) {
    if(fabs(x) < eps) return 0;
    return x > 0? 1: -1;
}
 
class Point {
public:
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    void input() {
        scanf("%lf%lf", &x, &y);
    }
    bool operator<(const Point &a) const {
        return (!dcmp(x - a.x))? dcmp(y - a.y) < 0: x < a.x;
    }
    bool operator==(const Point &a) const {
        return dcmp(x - a.x) == 0 && dcmp(y - a.y) == 0;
    }
    db dis2(const Point a) {
        return pow(x - a.x, 2) + pow(y - a.y, 2);
    }
    db dis(const Point a) {
        return sqrt(dis2(a));
    }
 
    db dis2() {
        return x * x + y * y;
    }
    db dis() {
        return sqrt(dis2());
    }
    Point operator+(const Point a) {
        return Point(x + a.x, y + a.y);
    }
    Point operator-(const Point a) {
        return Point(x - a.x, y - a.y);
    }
    Point operator*(double p) {
        return Point(x * p, y * p);
    }
    Point operator/(double p) {
        return Point(x / p, y / p);
    }
    db dot(const Point a) {
        return x * a.x + y * a.y;
    }
    db cross(const Point a) {
        return x * a.y - y * a.x;
    }
};
typedef Point Vector;
 
vector<Point> p;
 
map<pair<int, int>, int> mp;
 
int main() {
    double ans = 0;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        Point tmp;
        tmp.input();
        p.push_back(tmp);
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < p.size(); ++i) {
        for(int j = i + 1; j < p.size(); ++j) {
            if(!mp[{i, j}]) {
                mp[{i, j}] = 1;
                double s1 = 0, s2 = 0;
                for(int k = 0; k < p.size(); ++k) {
                    if(k == i || k == j) continue;
                    if(dcmp((p[j] - p[i]).cross(p[k] - p[i])) > 0) {
                        s1 = max(s1, fabs((p[j] - p[i]).cross(p[k] - p[i])) * 0.5);
                    } else {
                        s2 = max(s2, fabs((p[j] - p[i]).cross(p[k] - p[i])) * 0.5);
                    }
                }
                if(dcmp(s1) == 0 || dcmp(s2) == 0) continue;
                ans = max(ans, s1 + s2);
            }
        }
    }
    printf("%.10lf\n", ans);
    return 0;
}