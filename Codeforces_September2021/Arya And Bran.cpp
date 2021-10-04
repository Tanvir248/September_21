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
ll solve(ll t,ll k){   
   //freopen("input.txt", "r", stdin);
  ll cnt =0, ans =0;
   while(t--){
		int x;
		cin >> x;
		cnt += x;
		int r = min(8, cnt);
		cnt -= r;
		k -= r;
		ans++;
		if(k <= 0)
			break;
	}
	if(k > 0)
		return -1;
	else
		return ans;
}
int main(){
     speed();
ll n, k;
cin >> n >> k;
	
       cout<<solve(n, k);  
     ed
     return 0;
}