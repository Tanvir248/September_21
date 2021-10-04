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
const int N = int(4010);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln num[N][N];
lln vis[41000];
ls s;
void solve(){   
   //freopen("input.txt", "r", stdin);
   lln ans=0;
   lln n;
   cin>>n;
   cin>>s;
   for (lln i = 1; i <= s.sz; i++)
   {
      num[1][i]=s[i-1]-'0';
      vis[num[1][i]]++;
   }
   for (lln i = 2; i <=s.sz; i++)
   {
      for(lln j =1; j<=s.sz-i+1; j++){
            num[i][j]=num[i-1][j]+s[i+j-2]-'0';
      vis[num[i][j]]++;
     ans++;
      }
   }
   if(n==0){
      cout<<(vis[0]*ans*2-vis[0]*vis[0])<<endl;
      return;
   }
   ans =0;
   for (lln i = 1; i <= 40000; i++)
   {
      if(vis[i]&&n%i==0){
            if(n/i<40000){
                  ans+=vis[i]*vis[n/i];
            }
      }
   }
   cout<<ans<<endl;
}
int main(){
     speed();
 
       solve();  
     
     return 0;
}