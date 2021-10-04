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
ll x;

bool isCompletion(int z) {
	int bitval = 0;
	z += 1; while (z % 2 == 0) {
    z /= 2; bitval++;
    }
	return (z == 1);
}

int MSB(int z) {
	for (int i=20; i>=0; i--) {
		if ((z >> i) & 1) return i;
	}
	return -1;
}
void solve() {
	int i = 0; 
  vi xorCmd;
	while (!isCompletion(x)) {
		i = i + 1;
		if (i % 2 == 0) {x++; continue;}
		int r = MSB(x);
		if ((1 << r) != x) r++;
		x = (x ^ ((1 << r) - 1)); xorCmd.push_back(r);
	}
	cout << i << endl;
	for (auto z: xorCmd) cout << z << " "; cout << endl;
}

int main(int argc, char* argv[]) {
  speed();
  cin>>x;
 solve();
	return 0;
}