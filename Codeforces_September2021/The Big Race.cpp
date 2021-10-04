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
lln n, w, b, m, sum, d;
lln gcd(lln a, lln b) {
    return b == 0? a: gcd(b, a%b);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
    cin >> n >> w >> b;
    if (n/w*gcd(w, b)/b > 0) {
        lln lcm = w/gcd(w, b)*b;
        sum = min(w, b)*(n/lcm) + min(n%lcm, min(w, b)-1);
    } else {
        sum = min(min(w, b) - 1, n);
    }
    d = gcd(sum, n);
	cout<<sum/d<<"/"<<n/d<<endl;
	}
int main(){
     speed();

       solve();  
     
     return 0;
}