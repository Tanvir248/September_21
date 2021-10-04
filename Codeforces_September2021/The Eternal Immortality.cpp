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
lln L,R;
int ans;
void solve(){   
   //freopen("input.txt", "r", stdin);
   cin>>L>>R;
   if (R-L>=10) 
    cout<<0<<endl;
 	else
	{
		ans=1;
		for (long long i=L+1;i<=R;i++)
			ans=(1LL*ans*(i%10))%10;
	  cout<<ans<<endl;
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}