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
ll solve(ll x,ll ans){   
   //freopen("input.txt", "r", stdin);
	ll arr[x];
	cin>>arr[0];
	for (ll i = 1; i < x; i++)
	{
	cin>>arr[i];
	}
	for (ll i = 1; i < x; i++)
	{
		ll a = min(arr[0], arr[i]),b = max(arr[0],arr[i]);
		while(2*a<b){
			ans++;
			a*=2;
		} 
		arr[0]=arr[i];
	}
		return ans;
}
int main(){
     speed();
ll t;
cin>>t;
	while(t--){
		ll n;
		cin>>n;
       cout<<solve(n, 0);
	   ed  
	}
     return 0;
}