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
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define B begin()
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
ll solve(ll n){   
  
		vector<int> a(n);
		int mx = 0;
		for (auto &it : a) {
			cin >> it;
			mx = max(mx, it);
		}
		int ans = -1;
		for (int i = 0; i < n; ++i) {
			if (a[i] != mx) continue;
			if (i > 0 && a[i - 1] != mx)
       ans = i + 1;
			if (i < n - 1 && a[i + 1] != mx) 
      ans = i + 1;
		}
		return ans;
}
int main(){
     speed();
       // freopen("input.txt", "r", stdin);

  ll t;
  cin>>t;
  while(t--){
    ll a;
    cin>>a;
     cout<<  solve(a);
    ed
  }
     return 0;
}