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
ls a;
void solve(){   
  //freopen("input.txt", "r", stdin);
   ll t;
   cin >> t;
	while(t--){
		cin >> a;
		string s[2];
		for(auto x : a)
			s[int(x - '0') & 1] += x;
		

		reverse(s[0].B, s[0].E);
		reverse(s[1].B, s[1].E);

		string res = "";
		while(!(s[0].empty() && s[1].empty())){
			if(s[0].empty()){
				res += s[1].back();
				s[1].pop_back();
				continue;
			}
			if(s[1].empty()){
				res += s[0].back();
				s[0].pop_back();
				continue;
			}

			if(s[0].back() < s[1].back()){
				res += s[0].back();
				s[0].pop_back();
			}
			else{
				res += s[1].back();
				s[1].pop_back();
			}
		}

		cout << res << endl;
	}	
}
int main(){
     speed();

       solve();  
     
     return 0;
}