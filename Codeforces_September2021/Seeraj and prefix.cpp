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
const int N = int(1e5 + 5);   
 inline int getint()
 {
     int ans=0; 
     char w = getchar();
     while('0' > w || w > '9')
     w = getchar();
     while('0' <= w && w <= '9')
     {
         ans = ans * 10 + w - '0';
         w = getchar();
     }
     return ans;
 }
 
 int n, m;
 struct build{
     int ord, x, l, c;
     long long a, b;
 }arr[N];

 int sq[N];
 int main(){
     m = getint();
    
     for(int i = 1; i <= m; ++i)
     {
         arr[i].ord = getint();
         if(arr[i].ord == 1){
             arr[i].x = getint(); 
             arr[i].a = arr[i].b = arr[i - 1].b + 1LL;
             if(arr[i].a < N)sq[arr[i].a] = arr[i].x;
         }
         else{
             arr[i].l = getint(); 
             arr[i].c = getint();
                 arr[i].a = arr[i - 1].b + 1LL;
             arr[i].b = arr[i - 1].b + (long long)arr[i].l * (long long)arr[i].c;
             if(arr[i].a < N)
             {
                 int now = arr[i].a;
                 for(int j = 1; j <= arr[i].c && now < N; ++j)
                     for(int k = 1; k <= arr[i].l && now <N; ++k)
                         sq[now++] = sq[k];
             }
         }
     }
     
     n = getint();
     int h = 1; lln x;
     //  freopen("input.txt", "r", stdin);

     for(int i = 1; i <= n; i++){
         cin >> x;
         while(!(arr[h].a <= x && arr[h].b >= x))++h;
         if(x <= 100000)
         cout<<sq[x]<<" ";
         else{
             if((x - arr[h - 1].b) % (long long)arr[h].l != 0)
                 cout << sq[(x - arr[h - 1].b) % (long long)arr[h].l] <<" ";
             else cout << sq[arr[h].l] <<" ";
         }
     }
     ed
     return 0;
 }