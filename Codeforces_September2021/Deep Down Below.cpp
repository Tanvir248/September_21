#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define sz size()
#define vi vector<ll>
#define mi map<int, int>
#define pi pair<ll, ll>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll solve(ll n){   
   //freopen("input.txt", "r", stdin);
    vector<pi>pwr(n);
    for (ll i = 0; i < n; i++)
    {
      ll temp;
      cin>>temp;
      vi add(temp);
    ll maxp = -1;
    for (ll j = 0; j < temp; j++)
    {
        cin>>add[j];
        maxp = max(maxp, add[j]-j+1);
    }
    //pwr.pb(make_pair(maxp, temp));
    pwr[i]={maxp, temp};
    }
    sort(pwr.B, pwr.E);

    ll left =pwr[0].first;
    ll rgt = pwr[n-1].first;
  ll ans =1e12;
    while (left<=rgt){
      ll mid = (left+rgt)/2;
      ll crnt = mid;
      bool flag = 1;
      for (ll i = 0; i < n; i++)
      {
        if(crnt>=pwr[i].first){
            crnt+=pwr[i].second;
        }else{
          flag = 0;
          break;
        }
      }
      if(flag){
        ans = mid;
        rgt = mid-1;
      }else{
        left = mid+1;
      }
    }
    return ans;
}
int main(){
     speed();
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    cout<<solve(x);
ed
  } 
     
     return 0;
}