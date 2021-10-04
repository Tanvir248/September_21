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
lln ans, arr[4];
lln solve(){   
   //freopen("input.txt", "r", stdin);
    ll n;
    cin>>n;
    ls s;
    cin>>s;
    for (ll i = 0; i < n; i++)
    {
        if(s[i]=='A'){
                arr[0]++;
        }
        if(s[i]=='C'){
                arr[1]++;
        }
        if(s[i]=='G'){
                arr[2]++;
        }
        if(s[i]=='T'){
                arr[3]++;
        }
    }
    ans =0;
    for (ll i = 0; i < 4; i++)
    {
        ans= max(ans, arr[i]);
    }
    lln cnt =0;
    for (ll i = 0; i < 4; i++)
    {
        if(ans== arr[i]){
            cnt++;
        }
    }
    ans =1;
    while (n)
    {
        if(n&1) ans =ans*cnt%MOD;
        cnt = cnt*cnt%MOD;
        n>>=1;
    }
    return ans;
}
int main(){
     speed();

      cout<< solve();  
     ed
     return 0;
}