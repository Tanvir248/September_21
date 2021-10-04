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
#define vi vector<lln>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const lln N = lln(2e18);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
  // freopen("input.txt", "r", stdin);
   lln t, k=0,l, num, p, q, ans;
   vi add;
cin>>t;
    while(t--){
        
            cin>>num;
            add.pb(num);
            k+=num;
            }
        add.pb(N);
        add.pb(-N);
        sort(add.B,add.E);
        lln m;
        cin>>m;
        while(m--)
        {
            l=N;
            cin>>p>>q;
            auto x=upper_bound(add.B,add.E,p);
            ans=x-add.B;
            ans=add[ans];
            if(ans!=(-N) ||ans!=(-N))
            {
                num=k-ans;
                l=min(l,max((lln)0,p-ans)+max((lln)0,q-num));
            }
            x=upper_bound(add.B,add.E,p);
            ans=x-add.B;
            ans--;
            ans=add[ans];
            if(ans!=(-N) ||ans!=(-N))
            {
                num=k-ans;
                l=min(l,max((lln)0,p-ans)+max(lln(0),q-num));
            }
            x=lower_bound(add.B,add.E,p);
            ans=x-add.B;
            ans--;
            ans=add[ans];
            if(ans!=(-N) ||ans!=(-N))
            {
                num=k-ans;
                l=min(l,max((lln)0,p-ans)+max((lln)0,q-num));
            }
            cout<<l<<endl;
        }
 
}
int main(){
     speed();
 
       solve();  
     
     return 0;
}
