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
void print(vector<pair<int, int> > &v) {
	for (int i = 0 ; i < v.size() ; i++){ 
        cout << v[i].second << ' ';
    }
    ed
    }
void solve(){   

	   //freopen("input.txt", "r", stdin);

    ll n;
	cin >> n;
	vector<pair<int, int> > input;
	
	for (int i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		input.push_back(make_pair(x, i + 1));
	}
	
	sort(input.begin(), input.end());
	
	vector<pair<int, int> > swaps;
	for (int i = 1 ; i < n && swaps.size() < 2 ; i++) {
		if (input[i - 1].first == input[i].first) {
			swaps.push_back(make_pair(i - 1, i));
		}
	}
	if (swaps.sz < 2) {
		no
		return;
	}
	
	yes
	print(input);
	swap(input[swaps[0].first], input[swaps[0].second]);
	print(input);
	swap(input[swaps[1].first], input[swaps[1].second]);
	print(input);}
int main(){
     speed();

       solve();  
     
     return 0;
}