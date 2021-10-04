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
ll solve(ll n,ll a, ll b){   
   //freopen("input.txt", "r", stdin);
    string s;
    cin>> s;
    int m = unique(s.begin(), s.end()) - s.begin();
   return n * a + max(n * b, (m / 2 + 1) * b); 
  
}
int main(){
     speed();
ll t;
cin>>t;
while(t--){
    ll a, b, c;
    cin>>a>>b>>c;
     cout<<  solve(a, b, c);
     ed  
}
     return 0;
}