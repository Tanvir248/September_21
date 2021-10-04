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
ls solve(ll n, ll k){   

   	vector<pi> vp;
	   vi add(n);
		for (int i = 0; i < n; i++) {
			cin>>add[i];
				vp.pb(make_pair(add[i], i));
		}
		sort(vp.begin(), vp.end());
		int ans = 1;
		for (int i = 1; i < n; i++){
			if (vp[i - 1].second + 1 != vp[i].second)
				ans++;
				}
		if(ans<=k){
			return "YES";
		}
		return "NO";
	
}
int main(){
     speed();
	 //freopen("input.txt", "r", stdin);
  	
ll t;
cin>>t;
while(t--){
    int n, k;
		cin >> n >> k;
	
	   cout<<solve(n, k);
	   ed  
}
     return 0;
}