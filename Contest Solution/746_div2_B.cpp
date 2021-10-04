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
	return a<b;
}
bool solve(lln n, lln n2){ 
	lln arr[n], temp[n];
	bool flag =true;
  for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
    temp[i]=arr[i];
	}
	sort(arr, arr+n, comp);
  lln ans=0, mx=0;
  for (lln i = 0; i < n; i++)
  {
      if(temp[i]!= arr[i]){
        ans = n-(i+1);
        mx = max(ans, i);
        if(mx<n2){
          return false;
        }
      }
  }
  return true;
}
int main(){
     speed();
  // freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
	
    while(t--){
		ll weapon, Health;
		cin>>weapon>>Health;
 
   if(solve(weapon, Health)){
     yes
   }else{
     no
   }
	} 
     return 0;
}