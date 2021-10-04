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
const int N = 55;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls s[N];
ll n, m,t;
char sx[] = {'R', 'W'};

void solve(){
 // freopen("input.txt", "r", stdin);
cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> r(2), w(2);
		for(int i = 0; i < n; i++){
			cin>>s[i];
			for(int j = 0; j < m; j++){
				if(s[i][j] == 'R')
					r[i+j&1] = 1;
				else if(s[i][j] == 'W')
					w[i+j&1] = 1;
			}
		}
		int v = r[1] or w[0];
		int vv = r[0] or w[1];
		if(v and vv){
        no
			continue;
		}
 
yes	
	for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				char c = sx[i+j+v&1];
				cout<<c;
				if(s[i][j] != '.')
					assert(s[i][j] == c);
			}
			cout<<'\n';
		}
	}
}
int main(){
     speed(); 
     


  solve();


     return 0;
}