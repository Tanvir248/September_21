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
lln nCr[1001][1001],ans=1,s[1001],pwr[1001];

lln solve(lln n, lln m){   
   //freopen("input.txt", "r", stdin);
    pwr[0]=1;pwr[1]=1;
    for(int i=2;i<=n;i++){ 
    pwr[i]=(pwr[i-1]*2)%MOD;
    }
    for(int i=0;i<m;i++){
     cin >> s[i];
     }
    sort(s,s+m);
    lln cnt=0,tmp;
    for(int i=0;i<m;i++){
        if(i==0) 
        tmp=s[i]-1;
        else{
            tmp=s[i]-s[i-1]-1;
            ans=(ans*pwr[tmp])%MOD;
        }
        cnt+=tmp;
        ans=(ans*nCr[cnt][tmp])%MOD;
    }
    cnt+=n-s[m-1];
    ans=ans*nCr[cnt][n-s[m-1]]%MOD;

     return ans;
}
int main(){
     speed();
lln n, m;
cin >> n >> m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) 
            nCr[i][j]=1;
            else 
            nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%MOD;
        }
    }
    
      cout<< solve(n, m);  
     ed
     return 0;
}