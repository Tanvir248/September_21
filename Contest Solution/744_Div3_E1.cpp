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
   
 vi add(n);
 for (auto&x:add)
 {
      cin>>x;
 }
 
  deque<ll> dq;
        dq.push_back(add[0]);                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        
        for(ll i=1;i<n;i++){
        
         ll frnt=dq.front();
        
            if(add[i]<=frnt){
                dq.push_front(add[i]);
            }
            else {
             dq.push_back(add[i]);
            }
        }
       // cout<<"ans"<<endl;
        while(dq.empty()==false)
        {
         int frnt=dq.front();
         dq.pop_front();

            cout<<frnt<<" ";
        }
        ed
}
int main(){
     speed();
ll t;
cin>>t;
  while(t--){
   ll a;
   cin>>a;
       solve(a);  
  }
     return 0;
}