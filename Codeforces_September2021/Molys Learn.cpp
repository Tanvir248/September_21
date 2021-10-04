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
void solve(){   
 //freopen("input.txt", "r", stdin);
   int n,k;
    cin>>n>>k;
	lln x[n+1];
    x[0]=0;
    for(ll i =1; i<=n; i++){
		cin>>x[i];
		}
    partial_sum(x,x+n+1,x);

    if(k==1){
       lln ans=0;
        map<lln,int>m;
        for(int i=n;i>=0;i--){
            if(m.find(x[i]+1)!=m.end())
                ans+=m[x[i]+1];
            m[x[i]]++;
        }
	cout<<ans<<endl;
    }
    else if(k==-1){
      lln ans=0;
        map<lln,int>m;
        for(int i=n;i>=0;i--){
            if(m.find(x[i]+1)!=m.end())
                ans+=m[x[i]+1];
            if(m.find(x[i]-1)!=m.end())
                ans+=m[x[i]-1];
            
            m[x[i]]++;
        }
    cout<<ans<<endl;
	}
    else{
        lln ans=0;
        map<lln,int>m;
        for(int i=n;i>=0;i--){
            lln cur=1;
            while(true){
                if(abs(cur)>=1e15)break;
                if(m.find(x[i]+cur)!=m.end())
                ans+=m[x[i]+cur];
                cur*=k;
            }
            m[x[i]]++;
        }
       cout<<ans<<endl;
	   }
}
int main(){
     speed();

       solve();  
     
     return 0;
}