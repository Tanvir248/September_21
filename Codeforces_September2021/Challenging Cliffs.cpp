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
void solve(ll n){   
   //freopen("input.txt", "r", stdin);
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
	cin>>arr[i];
	}
	sort(arr, arr+n);
	if(n ==2){
		cout<<arr[0]<<" "<<arr[1]<<endl;
	}else{
	int ans = -1, mn = INT_MAX;

        for (int i = 1;i < n; i++){
            if(mn > abs(arr[i] - arr[i - 1])){
                ans = i;
                mn = abs(arr[i] - arr[i - 1]);
            }
        }
		 for (int i = ans;i < n; i++){
            cout << arr[i] <<" ";
        }
        for(int i = 0;i < ans; i++){
            cout << arr[i] <<" ";
        }
			ed
		}
}
int main(){
     speed();
ll t;
cin>>t;
	while (t--)
	{
		ll x;
		cin>>x;
       solve(x);  
	}
     return 0;
}