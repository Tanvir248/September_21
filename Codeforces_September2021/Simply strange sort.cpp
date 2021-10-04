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

ll solve(ll n){   
 //  freopen("input.txt", "r", stdin);
   
   ll arr[n];
   for (ll i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   ll cnt = 0;
    while (!is_sorted(arr, arr+n)){
    for (ll i = cnt%2; i+1 < n; i+=2)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    cnt++;
    }
    
   return cnt;
}
int main(){
     speed();
ll t;
cin>>t;
while(t--){
 ll a;
 cin>>a;
     cout<<  solve(a);
     ed  
}
     return 0;
}