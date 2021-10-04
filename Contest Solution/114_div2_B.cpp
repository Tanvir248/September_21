#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using llint= int;
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
ls solve(ll a, ll b, ll c,ll m){   
   //freopen("input.txt", "r", stdin);
    ll arr[3]= {a, b, c};
    sort(arr, arr+3);
    if(m>(a-1+b-1+c-1)){
            return "NO";
    }else{
        ll x = arr[2]-(arr[0]+arr[1]+1);
        if(m>=x){
            return "YES";
        }else{
            return "NO";
        }
    }
}
int main(){
     speed();
ll t;
cin>>t;
while(t--){
ll x, y, z, f;
cin>>x>>y>>z>>f;
      cout<< solve(x, y, z, f);  
      ed
}
     return 0;
}