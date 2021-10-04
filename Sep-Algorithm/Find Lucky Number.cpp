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
ll n, m;
ll arr[] = {0,0,0,0,1,0,0,1,0,0};

lln solve(lln t){   
    ll index=1;
    ll ans =0;
    while(t){
        ll temp = t%10;
        if(arr[temp]){
            ans+=temp*index;
            index*=10;
        }
        t/=10;
    }
    return ans;
}
int main(){
     speed();
     //freopen("input.txt", "r", stdin);
cin>>n>>m;
n+=1;
while(solve(n)!=m){
    n++;
}
       cout<<n<<endl;
     return 0;
}