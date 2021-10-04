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
bool solve(ls s1, ls s2, bool flag){   
   //freopen("input.txt", "r", stdin);
   
   set<ls>st;
   
    ll len= s1.sz;
    
     for (ll i = 0; i < len; i++)
     {
       for(ll j =0; j<len;j++){
          if(s1[i]==s2[j]){
            flag =true;
          break;
          }
       }
       if(flag)
       return true;
       }
   return false;
}
int main(){
     speed();
     ll t;
   cin>>t;
while (t--)
   {
     ls a , b;
     cin>>a>>b; 
     if(solve(a, b, false)){
        yes
     }else{
       no
     }

     }
     return 0;
}