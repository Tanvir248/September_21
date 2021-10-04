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
void solve(){   
//freopen("input.txt", "r", stdin);
   lln n,k,a;
        	cin>>n>>k;
        	lln v[n+1];
        	for(int i=1;i<=n;i++){
                cin>>v[i];
                }
        	lln sum[n+1],l=0,times=0;
        	sort(v+1,v+n+1);
        	sum[0]=0;
        	for(int j=1;j<=n;j++){
                l=l+v[j];
                sum[j]=l;
                }
        	lln  val=v[1];
        	for(int i=1;i<=n;i++){

                lln low=1,high=i,freq=-1;
                
                while(low<=high){

                    lln mid=(low+high)>>1;
                    
                    lln c=(i-mid+1ll)*v[i]-(sum[i]-sum[mid-1]);

                    if(c<=k)
                    {
                        high=mid-1;
                        freq=mid;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                if(freq==-1) freq=1;
                else freq=i-freq+1;

                if(times<freq){
                   times=freq;
                   val=v[i];
                }
            }
           cout<<times<<" "<<val<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}