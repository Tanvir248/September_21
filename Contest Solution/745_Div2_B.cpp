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
// void print_yes(){
//     return "YES";
// }
ls solve_func(lln n,lln m,lln k){   
      if(n*(n-1)/2<m||n-1>m)
      return "NO";
      else if((k<=1 && n==1))
      return "NO";
      else if((k<=2 && n==2))
      return "NO";
      else if(n>=3&&(m<n*(n-1)/2&&k<=3||n-1>m||m>=n*(n-1)/2&&k<=2))
      return "NO";
      else
       return "YES";
}
int main(){
     speed();
      //  freopen("input.txt", "r", stdin);

ll t;
    cin>>t;
    while(t--){
      
             lln n,m,k;

           cin>>n>>m>>k;

       cout<<solve_func(n, m, k); 
       ed 
    } 
     return 0;
}