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
const int N = int(100010);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
struct node{
    int x,y,p;
}a[N];
int n;
int f[N],ans[N];
bool cmp(node i,node j)
{
    return i.x<j.x;
}
int main()
{
    int i,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>x>>y;
    a[i].x=x;a[i].y=x+y-1;
    a[i].p=i;
    }
    sort(a+1,a+n+1,cmp);
    for(i=n;i>=1;i--){
    f[i]=1;
    for(int j=i+1;j<=n;j+=f[j]){
        if (a[i].y>=a[j].x) f[i]+=f[j];
        else break;
    }
    ans[a[i].p]=f[i];
    }
    for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    ed
    return 0;
}