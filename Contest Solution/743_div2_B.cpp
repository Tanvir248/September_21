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
#define mi map<lln, lln>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
} mi mp1, mp2;
lln solve(lln ans){   
   //freopen("input.txt", "r", stdin);
        ll n;
            cin>>n;
            ll arr[n];
            for (ll i = 0; i < n; i++){
                cin>>arr[i];
                mp1[arr[i]]=i;
            }
            mp2[1]=mp1[1];

            for(ll i=3;i<=2*n-1; i+=2){
                mp2[i]=min(mp2[i-2],mp1[i]);
            }
             ans=INF;
            for(ll i=0;i<n;i++){
                lln r;
                cin>>r;
                ans=min(ans,i+mp2[r-1]);
            }
            return ans; 
}
int main(){
     speed();
ll t;
cin>>t;
while(t--){
      cout<<solve(0);  
ed
}
     return 0;
}