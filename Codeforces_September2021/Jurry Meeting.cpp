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
const int MOD = 998244353;
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
ll solve(ll n, ll ans){   
   //freopen("input.txt", "r", stdin);
    vector<int> a(n);
   for (ll i = 0; i < n; i++)
   {
     cin>>a[i];
   }
   
 sort(a.B, a.E);
 ll mx = a[a.sz-1];
    int cmx = count(a.begin(), a.end(), mx);
    int k = count(a.begin(), a.end(), mx - 1);
    ll sub = 1;
    for (long long i = 1; i <= n; ++i) {
      ans = ans * i % MOD;
      if (i != k + 1) sub = sub * i % MOD;
    }
    if (cmx == 1){
       ans = (ans - sub + MOD) % MOD;
    }
    return ans;
}
int main(){
     speed();
        //freopen("input.txt", "r", stdin);

  int t;
  cin >> t;
  while (t--) {
  ll a;
  cin>>a;
    cout<< solve(a , 1);  
  ed}   
     return 0;
}