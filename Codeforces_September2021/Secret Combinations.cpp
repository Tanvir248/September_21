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
const int N = int(1111);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
int n;
char s[N],c[N],ans[N];
void init(char *s)
{
    for(int i=0;i<n;i++)
        s[i]='9';
}
void deal(char *s,char *c,int x)
{
    for(int i=0;i<n;i++)
    {
        int temp=s[i]-'0';
        temp=(temp+x)%10;
        c[i]=temp+'0';
    }
    c[n]='\0';
}
void cmp(char *s,char *c)
{
    if(strcmp(c,s)<0)
        for(int i=0;i<n;i++)
            s[i]=c[i];
}
void right(char *c)
{
    for(int i=n;i>0;i--)
        c[i]=c[i-1];
    c[0]=c[n];c[n]='\0';
}
int main()
{
    cin>>n;
        cin>>s;
        init(ans);
        for(int i=0;i<10;i++)
        {
            deal(s,c,i);
            for(int j=0;j<n;j++)
            {
                cmp(ans,c);
                right(c);
            }
        }
        cout<<ans<<endl;
    
    return 0; 
    }