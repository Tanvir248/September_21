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
  // freopen("input.txt", "r", stdin);
ll t;
cin>>t;
while(t--){
ll cnt =0;
ll ans =0;
   ll n;
   ls s1, s2;
   cin>>n>>s1>>s2;
   vector<pi> pv;
   for (ll i = 0; i < n; )
   { 
       if(((s1[i]=='1'&& s1[i+1]=='0')&& (s2[i]=='1'&& s2[i+1]=='0'))||((s1[i]=='0'&& s1[i+1]=='1')&& (s2[i]=='0'&& s2[i+1]=='1'))){
          cnt+=2;
          i+=2; 
       }else{
           pv.pb(make_pair(s1[i]-'0', s2[i]-'0'));
        i++;
       }
   }
//    for(auto &x:pv){
//        cout<<x.first<<" "<<x.second<<endl;
//    }
   for(auto &x:pv){
        if((x.first == 1 && x.second ==0)||(x.first == 0 && x.second ==1)){
            ans+=2;
        }
        if((x.first == 0 && x.second == 0)){
            ans+=1;
        }
        if((x.first == 1 && x.second == 1)){
            ans+=0;
        }
   }
   ans+=cnt;
   cnt = 0;
   cout<<ans<<endl;
   }
}
int main(){
     speed();
// ll t;
// cin>>t;
// while(t--){
//        cout<<solve(0);
//        ed  
// }
solve();
     return 0;
}