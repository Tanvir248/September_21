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
ls s1,s2;
bool flag;
ll sz1, sz2;
void solve(ll i, ll b, ll c){   
      if(flag){
          return;
      }
      if(b == sz2){
          flag =true;
          return;
      }
      if(i<0|| i==sz1||s1[i]!=s2[b]){
          return;
      }
      if(c){
        solve(i+1, b+1, 1);
      }
      solve(i-1, b+1, 0);      
  }
int main(){
     speed();

// freopen("input.txt", "r", stdin);

     ll t;
cin>>t;
while(t--){
     flag = false;
      cin>>s1>>s2;
      sz1 = s1.sz;
      sz2= s2.sz;
      for (ll i = 0; i < s1.sz; i++)
      {
        if(s1[i]==s2[0]){
            solve(i, 0, 1);
          }
      if(flag){
        break;
      }
      }
     
  cout<<(flag?"YES":"NO");
ed
}
      
     return 0;
}