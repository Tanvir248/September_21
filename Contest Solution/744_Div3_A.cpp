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
#define mi map<ll, ll>
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
ls solve(ls s){   
    
     ll cnta=0; 
     ll cntb = 0;
     ll cntc=0;
     for (ll i = 0; i < s.sz; i++)
     {
               if(s[i]=='A'){
                         cnta++;
               }
               else if(s[i]=='B'){
                    cntb++;
               }
               else{
                    cntc++;
               }
     }
     // for (auto &x: ans)
     // {    
     //   cout<<x.first<<" "<<x.second<<endl;

     //     }

     ll ans = cnta+cntc;
     
     if(ans==cntb){
          return "YES";
     }else{
          return "NO";
     }
     
}
int main(){
     speed();
    // freopen("input.txt", "r", stdin);
   
ll t;
cin>>t;
  while(t--){
   ls a;
   cin>>a;
       cout<<solve(a);
       ed  
  }
     return 0;
}