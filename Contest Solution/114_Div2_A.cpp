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
void solve(){   
  freopen("input.txt", "r", stdin);
   ll t;
   cin>>t;
   while (t--)
   {
     ll n;
     cin>>n;
     ls s1, s2,sx;
     for (ll i = 0; i < n; i++)
     {
       sx.pb('(');
       sx.pb(')');
     }
     ll siz = sx.sz;
      for (ll i = 0; i < n; i++)
      {
          if(i>=1){
            s1.pb('(');
            s2.pb(')');  
            sx.resize(siz-=2);
          }
            cout<<s1;
            cout<<sx;
            cout<<s2;
        ed
          
      }
      
   }
   
}
int main(){
     speed();

       solve();  
     
     return 0;
}