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
const int N = int(1e9);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

void solve(ll W,ll H,int x1,ll yy,ll x2,ll y2,ll w,ll h){   
  
   int ans = N;
	if (x2 - x1 + w <= W) {
		ans = min(ans, max(0, w - x1));
		ans = min(ans, max(0, x2 - (W - w)));
	}
	if (y2 - yy + h <= H) {
		ans = min(ans, max(0, h - yy));
		ans = min(ans, max(0, y2 - (H - h)));
	}
	if (ans == N)
		cout << -1 << endl;
	else
		cout << double(ans) << endl;
}
int main(){
     speed();
	  freopen("input.txt", "r", stdin);
int t;
 cin >> t;
	while(t--) {
 
    int W, H;
    int x1, yy, x2, y2;
    int w, h;

	cin >>W>>H;
	cin>>x1>>yy>>x2>>y2;
	cin >> w >> h;
    	solve(W,H,x1, yy, x2, y2, w, h);
	}     
     return 0;
}