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
const int N = int(2e5 + 17);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int n;
vi g[N];
ld dfs(int v = 0, int p = -1){
	ld sum = 0;
	for(auto u : g[v])
		if(u != p)
			sum += dfs(u, v) + 1;
	return sum ? sum / (g[v].size() - (p != -1)) : 0;
}
int main(){
    speed();
	cin >> n;
	for(int v, u, i = 1; i < n; i++){
		cin >> v >> u, v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	cout << fixed << setprecision(7) << dfs() << endl;
	return 0;
}