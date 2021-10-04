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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int sieve[N];
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll  n;
	cin>>n;
	for(ll i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			for(ll j=2*i; j<=n+1; j+=i)
				sieve[j]=1;
	}
	
	if(n>2)
		cout<<2<<endl;
	else
		cout<<1<<endl;

	for(ll i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			cout<<"1 ";
		else
			cout<<"2 ";
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}