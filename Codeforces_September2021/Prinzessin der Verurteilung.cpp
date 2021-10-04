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
void solve(){
  ll n;
  ls s;
  cin>>n>>s;
  set<ls>ts;
  for (ll i = 0; i < n; i++)
  {
    ls sx;
      for (ll j = 0; j<5 && j+i<n; j++)
      {
          sx.pb(s[i+j]);
          ts.insert(sx);
      }
      
  }
  for (ll i = 1; i <6; i++)
  {
        string t(i, 'a');
        while(true) {
            if(ts.count(t) == 0) {
                cout << t << '\n';
                return;
            }
            int idx = i - 1;
            while(idx >= 0 && t[idx] == 'z') {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++;
        }
    }
  
}
int main(){
     speed(); 
     
   //    freopen("input.txt", "r", stdin);

ll t;
cin>>t;
while (t--)
{
  solve();
}

     return 0;
}