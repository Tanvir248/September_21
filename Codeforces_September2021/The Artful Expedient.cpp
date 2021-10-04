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
const int N = int(4000007);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool vis[N];
int a[4007],b[4007],n;

void solve(){   
   //freopen("input.txt", "r", stdin);
   cin>>n;
   memset(vis,false,sizeof(vis));
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
    vis[a[i]]=true;
	}
	for (int i=1;i<=n;i++)
	{
    cin>>b[i];
		vis[b[i]]=true;
	}
	int ans=0;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			if (vis[a[i]^b[j]]) ++ans;
	if (ans%2==0) cout<<"Karen"<<endl; 
  else cout<<"Koyomi"<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}