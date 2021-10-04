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
const int N = int(1e5 + 86);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll arr[N];
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll n;
   cin>>n;
   for (ll i = 1; i <=n; i++)
   {
     cin>>arr[i];
   }
   if(arr[1]){
     cout<<n+1<<" ";
     for (ll i = 1; i <= n; i++)
     {
       cout<<i<<" ";
     }
  return;     
   }
   for (ll i = 1; i < n; i++)
   {
     if(!arr[i]&& arr[i+1]){
        for (ll j = 1; j <= i ; j++)
        {
          cout<<j<<" ";
        }
        cout<<n+1<<" ";
        for (ll j = i+1; j <= n ; j++)
        {
          cout<<j<<" ";
        }
        return;
     }
     
   }
   for (ll i = 1; i <= n; i++)
   {
     cout<<i<<" ";
   }
   cout<<n+1;
   
}
int main(){
     speed();
ll t;
cin>>t;
while (t--)
{
  solve();
  ed
}

     return 0;
}