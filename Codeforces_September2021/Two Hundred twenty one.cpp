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
int a[1000000 + 5], p[1000000 + 5];

int get_sum(int l, int r) {
    if (l > r) {
        return 0;
    }
    return (l % 2 == 1) ? p[r] - p[l - 1] : p[l - 1] - p[r];
}

int main() {
   speed();

    //  freopen("input.txt", "r", stdin);

    int t;
    cin>>t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string ss;
        cin >> ss;
        for (int i = 1; i <= n; i++) {
            a[i] = (ss[i - 1] == '+' ? 1 : -1);
        }
        p[0] = 0;
        for (int i = 1; i <= n; i++) {
            p[i] = p[i - 1] + (i % 2 == 1 ? a[i] : -a[i]);
        }
        for (int o = 0; o < q; o++) {
            int l, r;
            cin >> l >> r;
            if (get_sum(l, r) == 0) {
                cout << "0\n";
                continue;
            }
            if ((r - l + 1) % 2 == 0) {
                cout << "2\n";
            }
            else {
                cout << "1\n";
            }
        }
    }
    return 0;
    }