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
lln total,mult,val[N];
bool vis[N];
stack<lln> ss;
vector<lln> x;
vector<lln> adj[N*3];
vector<lln> adj2[N*3];
void dfs(lln s)
{
    vis[s]=1;

    for(int i : adj[s])
    {
        if(!vis[i])
            dfs(i);
    }

    ss.push(s);
}

void dfs2(ll s)
{
    vis[s]=1;
    x.push_back(s);

    for(int i : adj2[s])
    {
        if(!vis[i])
            dfs2(i);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    lln i,j,k;
    lln n,m;
    lln u,v;
    lln cnt;
cin>>n;

    for(i=1;i<=n;i++)
       cin>>val[i];

    cin>>m;

    for(i=0;i<m;i++)
    {
       cin>>u>>v;

        adj[u].push_back(v);
        adj2[v].push_back(u);
    }

    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    total=0,mult=1;
    memset(vis,0,sizeof(vis));

    while(!ss.empty())
    {
        if(!vis[ss.top()])
        {
            x.clear();
            dfs2(ss.top());

            m=MOD;
            cnt=0;
            
            for(i=0;i<x.sz;i++){
                m=min(m,val[x[i]]);
                }

            total+=m;

            for(i=0;i<x.size();i++)
            {
                if(val[x[i]]==m)
                    cnt++;
            }

            mult*=(cnt%MOD);
        }

        ss.pop();
    }

    cout<<total<<" "<<mult%MOD<<endl;

    return 0;
}