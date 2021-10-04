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
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define B begin()
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
void solve(ll n){   
  
		vi add(n);
		for (auto &it : add)
     cin >> it;

		while (add.back() == 0)
     add.pop_back();
		
    reverse(add.B, add.E);
		while (add.back() == 0) add.pop_back();
		cout << count(add.B, add.E, 0) << endl;
}
int main(){
     speed();
       // freopen("input.txt", "r", stdin);

  ll t;
  cin>>t;
  while(t--){
    ll a;
    cin>>a;
       solve(a);
    
  }
     return 0;
}