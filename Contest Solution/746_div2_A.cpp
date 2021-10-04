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
const int N = int(1000 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
// ls print_soln(){
  
// }
bool comp(int a, int b){
	return a>b;
}
lln solve(lln n, lln H){ 
	lln arr[N];
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n, comp);

	lln temp1=arr[1], cnt, ans, mod;
  lln temp0 = arr[0];

ll sum = temp1+temp0;
	if(temp0>=H){
    return 1;
  }else{
     ans = H/sum;
     mod =H%sum;
   cnt =0;
    if(mod>temp0){
        cnt += 2;
    }
    else if(mod>0){
      cnt++;
    }	
    return 2*ans+cnt;
  }
}
int main(){
     speed();
  // freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
	
    while(t--){
		ll weapon, Health;
		cin>>weapon>>Health;
 
   cout<<solve(weapon, Health);
    ed
	} 
     return 0;
}