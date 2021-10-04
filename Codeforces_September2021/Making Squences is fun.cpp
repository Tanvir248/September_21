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
lln get(lln a)
{
    lln ret=0;
    lln now=1;
    lln t=1;
    for(;;)
    {
        if(now*10>a)
        {
            ret+=(a-now+1)*t;
            break;
        }
        ret+=now*9*t;
        now*=10;
        t++;
    }
    return ret;
}
int main()
{
    lln gen,st,tim;
    cin>>gen>>st>>tim;
    gen/=tim;
    lln beg=st-1,end=20000000000000000LL;
    for(;;)
    {
        lln med=(beg+end)/2+1;
        if(get(med)-get(st-1)>gen)
        {
            end=med-1;
        }
        else
        {
            beg=med;
        }
        if(beg==end)
        {
           cout<<(beg-st+1)<<endl;
            break;
        }
    }
}