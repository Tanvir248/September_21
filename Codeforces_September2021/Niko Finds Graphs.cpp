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
ll ans;
ll solve(){   
   //freopen("input.txt", "r", stdin);
    int n, m;
  
  cin>>n>>m;
    vi a(n), b(m);
    for(int i = 0; i < n; ++i)
        cin>>a[i];
    for(int i = 0; i < m; ++i)
        cin>>b[i];

    int c0 = 0, c1 = 0;
    for(int i = 0; i < n; ++i)
        if (a[i]%2 == 0)
            ++c0;
        else
            ++c1;

    int k0 = 0, k1 = 0;
    for(int i = 0; i < m; ++i)
        if (b[i]%2 == 0)
            ++k0;
        else
            ++k1;

   ans  = min(c1, k0) + min(c0, k1);

   return ans;
}
int main(){
     speed();

    cout<<solve();  
     ed
     return 0;
}