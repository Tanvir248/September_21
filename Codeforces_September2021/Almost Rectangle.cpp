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
void solve(){   
   //freopen("input.txt", "r", stdin);
   int n;
        cin >> n;
        vector<string> f(n);
        vector<pi> p;
        for(ll i= 0;i<n; i++) {
            cin >> f[i];
            for(ll j=0;j< n; j++){
                if (f[i][j] == '*')
                    p.push_back({i, j});
		      }
			        }

        p.push_back(p[0]);
        p.push_back(p[1]);
        if (p[0].first == p[1].first) {
            
			p[2].first = (p[2].first + 1) % n;
            p[3].first = (p[3].first + 1) % n;
        
		} 
		else if (p[0].second == p[1].second) {
            p[2].second = (p[2].second + 1) % n;
            p[3].second = (p[3].second + 1) % n;
        } 
		else{
            swap(p[2].first, p[3].first);
			}
        f[p[2].first][p[2].second] = '*';
        f[p[3].first][p[3].second] = '*';
        
		for(ll i= 0;i<n; i++){
            cout << f[i] << endl;
			}
}
int main(){
     speed();
ll t;
cin>>t;
while(t--)
       solve();  
     
     return 0;
}