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
const int N = int(3e5 + 2);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll ans=0, temp[N];
void addval(){
  for (ll i = 1; i <= 3e5; i++)
  {
    temp[i]=(temp[i-1]^i);
  }
  
}
ll solve(ll n, ll m){   
  ans = temp[n-1];
  if(ans == m){
      return n;
  }else{
    if((m^ans) != n){
      return n+1;
    }
     return n+2;
  }
}
int main(){
     speed();

  // freopen("input.txt", "r", stdin);
      addval();

ll t;
cin>>t;
while(t--){
 ll a,b;
 cin>>a>>b;
    cout<< solve(a, b);  
    ed
}
     return 0;
}