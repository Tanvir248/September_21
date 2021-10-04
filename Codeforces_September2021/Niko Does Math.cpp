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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln a, b;
lln rand_seed()
{
	long long a = rng();
    return a;
}
int main()
{
    speed();
    cin >> a >> b;
    lln dif = abs(a - b);
    vi v;
    for(int i = 1; i * i <= dif; ++i)
    {
        if(dif % i == 0)
        {
            v.push_back(i);
            if(i * i != dif)
                v.push_back(dif / i);
        }
    }
    long long ans = (1LL<<62);
    int vl = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i)
    {
        int nr = v[i];
        if(a % nr != b % nr)
            continue;
        if(a % nr == 0)
        {
            long long pans = (a * b)/__gcd(a, b);
            if(pans < ans)
                ans = pans, vl = 0;
        }
        else
        {
            long long pans = ((nr - a % nr + a) * (nr - b % nr + b))/__gcd((nr - a % nr + a), (nr - b % nr + b));
            if(pans < ans)
                ans = pans, vl = nr - a % nr;
        }
    }
    cout << vl;
    ed
    return 0;
    }