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

 int n,m;
void solve(){   
     cin>>m>>n;
   //freopen("input.txt", "r", stdin);

     double x=pow(1.0/m,n);

     double ans=x;

     for(int i=1; i<=m; i++)

     {

         double xx=pow(i*1.0/m,n);

         ans+=(xx-x)*i;

         x=xx;

     }
     printf("%.12lf\n",ans);
}
int main(){
     speed();

       solve();  
     
     return 0;
}