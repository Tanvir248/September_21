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
#define mi map<lln, lln>
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
mi r,l;
lln arr[N], ans;
lln solve(){   
   //freopen("input.txt", "r", stdin);
    lln n, k;
    ans=0;
    cin>>n>>k;

    for(lln i=0;i<n;i++){
        cin>>arr[i];
        r[arr[i]]++;
    }

    for(lln i=0;i<n;i++){
        lln k1=0, k2=0;

        if(arr[i]%k==0)
            k1=l[arr[i]/k];

        r[arr[i]]--;

        k2= r[arr[i]*k];

        ans+= k1*k2;

        l[arr[i]]++;
    }

    return ans;
}
int main(){
     speed();

      cout<< solve();  
     ed
     return 0;
}