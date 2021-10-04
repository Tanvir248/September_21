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
#define vi vector<ll>
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
void print_soln(vector<vi>cnt){
        for(auto&it:cnt)
          {
            for(auto &x:it)
            {
                cout<<x<<" ";
            }
            ed
            }
}
void solve(ll n){   
   //freopen("input.txt", "r", stdin);

        vi add(n);  
     vector<vi>cnt;

        for(ll i=0;i<n;i++)
        {
            cin>>add[i];
        }
        for(ll i=n-1;i>0;i--)
        {
            ll mx=-INF;
            ll indx=-1;
            for(ll j=0;j<=i;j++)
            {
                if(mx<add[j])
                {
                    mx=add[j];
                    indx=j;
                }
            }
            if(indx==i)
            {
                continue;
            }
            else{
                vi temp;
                vi tempv(n);
                for(ll j=0;j<=i;j++)
                {
                    tempv[j]=add[(j+indx+1)%(i+1)];
                }
                add=tempv;
                cnt.push_back({1,i+1,indx+1});
            }
        }
        cout<<cnt.sz;
        ed
        print_soln(cnt);
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