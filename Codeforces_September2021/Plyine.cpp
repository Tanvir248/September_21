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
ll x[3], y[3];
 
bool is_between(int a, int b, int c) {
    return min(a, b) <= c && c <= max(a, b);
}
 
bool f(int i, int j, int k) {
    return (x[k] == x[i] || x[k] == x[j]) && is_between(y[i], y[j], y[k]) ||
           (y[k] == y[i] || y[k] == y[j]) && is_between(x[i], x[j], x[k]);
}
 
int main() {
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
 
    if (x[0] == x[1] && x[1] == x[2] || y[0] == y[1] && y[1] == y[2]) {
        cout << "1\n";
    } else if (f(0, 1, 2) || f(0, 2, 1) || f(1, 2, 0)) {
        cout << "2\n";
    } else {
        cout << "3\n";
    }
}