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
const int MOD = 1000000009;
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
lln quickpow(lln k,lln n){  
      lln ans=1;   
       while(n){
                   if(n&1) ans = (ans*k)%MOD;
              k = (k*k)%MOD;        
              n>>=1;    
              }    
              return ans;
              } int main(){  
                    lln m,n,k;    
                 cin>>n>>m>>k;        
                        lln x1 = n%k;        
                        lln x2 = n/k*(k-1);        
                        lln xx = x1+x2;
                        if(m<=xx) cout<<m<<endl;        
                        else{            
                            ll x3 = m - xx;           
                            ll x4 = m - x3*k;         
          lln x5 =(quickpow((ll)2,(ll)x3)-1)* k %MOD; 
                x5 = (x5 * 2 % MOD + x4) % MOD;            
            cout<<x5<<endl;
            }    
              
   return 0;
}