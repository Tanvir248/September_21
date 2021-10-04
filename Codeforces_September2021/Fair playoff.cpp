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
ls solve(ll n1, ll n2,ll n3,ll n4){   
    if(min(n1, n2)>max(n3, n4)||max(n1, n2)<min(n3, n4)){
        return "NO";
    }return "YES";
}
int main(){
     speed(); 
     
       //freopen("input.txt", "r", stdin);

ll t;
cin>>t;
while (t--)
{
  ll a, b, c, d;
  cin>>a>>b>>c>>d;
  cout<<solve(a, b,c, d);
ed
}

     return 0;
}