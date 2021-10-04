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
lln cnt=0;
struct source
{
    lln f=0,s=0;
};
lln solve(){   
   //freopen("input.txt", "r", stdin);

    lln i,j,k;
    lln n,m;

    cin>>n;

    map<lln,source> mp;
    for(i=0;i<n;i++)
    {
        cin>>m;

        if(!m)
            mp[m].f++;

        else
        {
            if(m>0)
                mp[m].f++;
            else
                mp[m*-1].s++;
        }
    }

    map<lln,source>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->first==0)
        {
            source d=p->second;
            cnt+=((d.f-1)*d.f)/2;
        }

        else
        {
            source d=p->second;
            cnt+=(d.f*d.s);
        }

        p++;
    }

    
    return cnt;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}