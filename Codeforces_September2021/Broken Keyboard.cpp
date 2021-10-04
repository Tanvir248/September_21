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
bool ans[26];

void solve(){   
   //freopen("input.txt", "r", stdin);
   ls s;
	cin >> s;
	
	memset(ans, 0, sizeof(ans));
	
	for (int i = 0; i < s.size(); i++) {
	ll j = i;
	while (j + 1 < s.size() && s[j + 1] == s[i])
			j++;
		if ((j - i) % 2 == 0)
			ans[s[i] - 'a'] = true;
		i = j;
	}
	
	for (int i = 0; i < 26; i++){ 
  
  if (ans[i]){
		cout << char('a' + i);
    }
  }
	ed
}
int main(){
     speed();
ll t;
cin>>t;
while(t--)
       solve();  
     
     return 0;
}