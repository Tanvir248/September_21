#include<bits/stdc++.h>
using namespace std;
using LL = long long int;
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
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}struct Point  
{  
    LL x, y;  
    int a, b;  
}p[4];  
LL d[6];  
  
LL dist(LL x1, LL y1, LL x2, LL y2)  
{  
    return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));  
}  
  
bool judge(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)  
{  
    d[0] = dist(x1,y1,x2,y2);  
    d[1] = dist(x1,y1,x3,y3);  
    d[2] = dist(x1,y1,x4,y4);  
    d[3] = dist(x2,y2,x3,y3);  
    d[4] = dist(x2,y2,x4,y4);  
    d[5] = dist(x3,y3,x4,y4);  
    sort(d, d + 6);  
    if(d[0] == d[1] && d[1] == d[2] && d[2] == d[3] && d[4] == d[5])  
        return true;  
    return false;  
}  
  
void rev(LL &x, LL &y, int a, int b)  
{     
    LL xx = x;  
    LL yy = y;  
    x = -yy + b + a;  
    y = b + xx - a;  
}  
  
int solve()  
{  
    int i, j, k, l;  
    bool ok = false;  
    int re = 0;  
    int mi = 0xfffff;  
    for(i = 1; i <= 4; i++)  
    {  
        int ii = i;  
        if(i == 4)  
            ii = 0;  
        rev(p[0].x, p[0].y, p[0].a, p[0].b);  
        for(j = 1; j <= 4; j++)  
        {  
            int jj = j;  
            if(j == 4)  
                jj = 0;  
            rev(p[1].x, p[1].y, p[1].a, p[1].b);  
            for(k = 1; k <= 4; k++)  
            {  
                int kk = k;  
                if(k == 4)  
                    kk = 0;  
                rev(p[2].x, p[2].y, p[2].a, p[2].b);  
                for(l = 1; l <= 4; l++)  
                {  
                    int ll = l;  
                    if(l == 4)  
                        ll = 0;  
                    rev(p[3].x, p[3].y, p[3].a, p[3].b);  
                    if(p[0].x == p[1].x && p[1].x == p[2].x && p[2].x == p[3].x)  
                            continue;  
                    if(judge(p[0].x,p[0].y,p[1].x,p[1].y,p[2].x,p[2].y,p[3].x,p[3].y))  
                    {  
                        re = ii + jj + kk + ll;  
                        mi = min(mi, re);  
                        ok = true;  
                    }  
                }  
            }  
        }  
    }  
    if(ok)  
        return mi;  
    else  
        return -1;  
}  
  
int main()  
{     
	//freopen("input.txt", "r", stdin);

    int t;  
    scanf("%d", &t);  
    while(t--)  
    {  
        for(int i = 0; i < 4; i++)  
            scanf("%lld %lld %d %d", &p[i].x, &p[i].y, &p[i].a, &p[i].b);  
        cout<<solve();
		ed
	
	}  
}  
