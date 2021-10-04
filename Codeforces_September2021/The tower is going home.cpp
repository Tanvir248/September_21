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
int n, m, a[N], v[N];
struct line {
    int L, R, Y;
    bool operator < (const line &t) const {
        if (L != t.L) return L < t.L;
        else return Y < t.Y;
    }
}l[N];

ll solve(int ans){   
   //freopen("input.txt", "r", stdin);
  
    for (int i = 1; i <= n; i++) {
  cin>>a[i];
    }
    a[++n] = 1e9;
    sort(a + 1, a + 1 + n);

    for (int i = 1; i <= m; i++) {
      cin>>l[i].L>>l[i].R>>l[i].Y;
        l[i].L--;
    }
    sort(l + 1, l + m + 1);

    int pre = 0;
    for (int i = 1; i <= m; i++) {
        if (l[i].Y < pre) break;
        pre = l[i].Y;
        int pos1 = lower_bound(a, a + 1 + n, l[i].L) - a;
        int pos2 = lower_bound(a, a + 1 + n, l[i].R) - a;
        if (a[pos2] != l[i].R) pos2--;
        if (pos1 == pos2 || pos1 > pos2) continue;
        v[pos1]++;
        v[pos2]--;
    }

    int tmp = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += v[i];
        ans = min(ans, sum + tmp);
        tmp++;
    }

   return ans;
}
int main(){
     speed();
  cin>>n>>m;
       cout<<solve(INF);  
     ed
     return 0;
}