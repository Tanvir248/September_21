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
bool mark[10];
char str[10110],newstr[5][10110];
char output[5][5] = {"aabb","abab","abba"};
void Judge()
{
    if( !strcmp(newstr[0],newstr[1])&& !strcmp(newstr[0],newstr[2])&& !strcmp(newstr[0],newstr[3]))
        mark[0] = 1;
    else if(!strcmp(newstr[0],newstr[1])&&!strcmp(newstr[2],newstr[3])) mark[1] = 1;
    else if(!strcmp(newstr[0],newstr[2])&&!strcmp(newstr[1],newstr[3])) mark[2] = 1;
    else if(!strcmp(newstr[0],newstr[3])&&!strcmp(newstr[1],newstr[2])) mark[3] = 1;
    else mark[4] = 1;
}
bool Is_vowels(char a)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') return true;
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    memset(mark,0,sizeof(mark));
    while(n--)
    {
        int tot,ok=1;
        for(int i = 0; i < 4; i++)
        {
          cin>>str;
            int lens = strlen(str),pos;
            tot=0;
            for(int j = lens-1; j >= 0; j--)
            {
                if(Is_vowels(str[j]))
                {
                    tot++;
                }
                if(tot == k)
                {
                    pos = j;
                    break;
                }
            }
            if(tot < k)
            {
                mark[4] = 1;
                ok = 0;
            }
            if(tot == k){
                for(int j = pos; j < lens; j++)
                {
                    newstr[i][j-pos] = str[j];
                }
                newstr[i][lens-pos] = '\0';
                            }
        }
        if(ok)
            Judge();
    }
    if(mark[4]) puts("NO");
    else
    {
        bool flag = true;
        for(int i = 1; i <= 3; i++)
        {
            for(int j = i+1; j <= 3; j++)
            {
                if(mark[i] && mark[j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) puts("NO");
        else if(flag)
        {
            for(int i = 1; i <= 3; i++)
            {
                if(mark[i])
                {
                    printf("%s\n",output[i-1]);
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                puts("aaaa");
            }
        }
    }
    return 0;
}