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
const int N = int(5007);
int p[N][N];
int pre[N];
int a,b,c;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int solve(int x,int y)
{
	int res=0;
	for (int k=0;k<=x&&k<=y;k++)
	{
		int del=pre[k];
		del=(1LL*del*p[x][k])%MOD;
		del=(1LL*del*p[y][k])%MOD;
		res=(res+del)%MOD;
	}
	return res;
}
int main()
{

  cin>>a>>b>>c;
	memset(p,0,sizeof(p));
	p[0][0]=1;
	for (int i=1;i<=5000;i++)
	{
		p[i][0]=1;
		for (int j=1;j<=i;j++)
			p[i][j]=(p[i-1][j-1]+p[i-1][j])%MOD;
	}
	memset(pre,0,sizeof(pre));
	pre[0]=1;
	for (int i=1;i<=5000;i++)
		pre[i]=(1LL*pre[i-1]*i)%MOD;
	int ans=1;
	ans=(1LL*ans*solve(a,b))%MOD;
	ans=(1LL*ans*solve(b,c))%MOD;
	ans=(1LL*ans*solve(a,c))%MOD;
cout<<ans<<endl;
	return 0;
}