#include<bits/stdc++.h>  
using namespace std;  
  
typedef long long int LL;  
  
const LL mod = 1e9+7LL;  
const int maxn=100100;  
  
int n,k;  
LL a[maxn];  
char str[maxn];  
  
LL inv[maxn],presum[maxn];  
LL jc[maxn],jcv[maxn],e[maxn];  
  
void init()  
{  
/// inv jc e  
inv[1]=1; jc[0]=1; jcv[0]=1;  
jc[1]=1; jcv[1]=1; e[0]=1; e[1]=10;  
for(int i=2;i<maxn;i++)  
{  
inv[i]=inv[mod%i]*(mod-mod/i)%mod;  
jc[i]=(jc[i-1]*i)%mod;  
jcv[i]=(jcv[i-1]*inv[i])%mod;  
e[i]=(e[i-1]*10LL)%mod;  
}  
}  
  
LL COMB(LL n,LL m)  
{  
if(m<0||m>n) return 0LL;  
if(m==0||m==n) return 1LL;  
LL ret=((jc[n-m]*jcv[n-m])%mod*jcv[m])%mod;  
return ret;  
}  
  
void solve(int n,int k)  
{  
LL ans=0;  
if(k==0)  
{  
for(int i=n-1;i>=0;i--)  
ans=(ans+(e[n-1-i]*a[i])%mod)%mod;  
cout<<ans%mod<<endl;  
return ;  
}  
for(int l=0;l<=n-2;l++)  
ans=(ans+(e[l]*COMB(n-l-2,k-1)%mod*presum[n-l-2])%mod)%mod;  
for(int i=0;i<=n-1;i++)  
ans=(ans+((a[i]*e[n-1-i])%mod*COMB(i,k))%mod)%mod;  
cout<<ans%mod<<endl;  
}  
  
int main()  
{  
//freopen("input.txt","r",stdin);  

init();  
scanf("%d%d",&n,&k);  
scanf("%s",str);  
for(int i=0;i<n;i++)  
{  
a[i]=str[i]-'0';  
if(i==0) presum[i]=a[i];  
else presum[i]=(presum[i-1]+a[i])%mod;  
}  
solve(n,k);  
return 0;  
}  