#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln n, x1, yy, x2, y2;
lln sqr(lln a){
    return a*a;
}
lln solve(){   
   //freopen("input.txt", "r", stdin);
  
    cin >> n >> x1 >> yy >> x2 >> y2;
    vector< pair<lln, lln> > dist(n);
    for (int i = 0; i < n; i++) {
        lln x, y;
        cin >>x>>y;
        dist[i].first = sqr(x - x1) + sqr(y-yy);
        dist[i].second = sqr(x - x2) + sqr(y - y2);
    }
    dist.pb({0, 0});
 
    lln result = 8e18;
    for (auto i: dist) {
        lln r1 = i.first;
        lln r2 = 0;
        for (auto j: dist) {
            if (j.first > r1) {
                r2 = max(r2, j.second);
            }
        }
        result = min(result, r1 + r2);
    }
    return result;
 }
int main(){
     speed();

      cout<< solve();  
     ed
     return 0;
}