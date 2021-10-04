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
const int maxn = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln dp[1005][15];
lln N,M,c0,d0;
lln a[15],b[15],c[15],d[15];
lln dpf(ll n,ll m)
{
    if(n==0)return 0;
    if(m==0)
        return (n/c0)*d0;
 
    if(dp[n][m]!=-1)
        return dp[n][m];
    lln ans=dpf(n,m-1);
    for(ll i=1;n-i*c0>=0;i++)
        ans=max(ans,i*d0+dpf(n-i*c0,m-1));
 
    for(ll i=1;a[m]-i*b[m]>=0 && n-i*c[m]>=0 ;i++)
        ans=max(ans,i*d[m]+dpf(n-i*c[m],m-1));
    return dp[n][m]=ans;
}
int main()
{
    cin>>N>>M>>c0>>d0;
    for(int i=1;i<=M;i++)
        cin>>a[i]>>b[i]>>c[i]>>d[i];
 
    memset(dp,-1,sizeof(dp));
    lln ans=dpf(N,M);
    cout<<ans<<endl;
 
    return 0;
}