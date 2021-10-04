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
const int N = int(4e5 + 1);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool visited[N];
int arr[N][2];
vi add[N];
void solve(lln source){   
	visited[source]= true;
	for (auto &i: add[source])
	{
		if(!visited[i]){
				solve(i);
		}
	}
	
}
int main(){
     speed();
	 
	   // freopen("input.txt", "r", stdin);

lln t;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        for (int i = 1; i <= n; i++){
		cin >> arr[i][0];
		add[i]=vi();
		visited[i]=false;
		}

        for (int i = 1; i <= n; i++){
			cin >> arr[i][1];
		}
        for (int i = 1; i <= n; i++) {
            add[arr[i][0]].push_back(arr[i][1]);
			 add[arr[i][1]].push_back(arr[i][0]);
        }
        ll ans = 1;
        for (lln i = 1; i <= n; i++) {
            if (!visited[i]) {
                ans = ans * ll(2) % MOD;
                solve(i);
            }
        }
       cout<<ans<<endl;
	   }
     return 0;
}