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
void solve(){   
  
 int n;
  cin >> n;
  vi b(n + 2);
  for (int &x : b) {
    cin >> x;
  }

  multiset<ll>mst(b.begin(), b.end());
  lln sum = accumulate(b.begin(), b.end(), 0LL);
  for (int x : b) {
    mst.erase(mst.find(x));
    sum -= x;
    if (sum % 2 == 0 && sum <= 2'000'000'000 && mst.find(sum / 2) != mst.end()) {
      mst.erase(mst.find(sum / 2));
      for (int y : mst) {
        cout << y << " ";
      }
    ed
      return;
    }
    sum += x;
    mst.insert(x);
  }
  cout<<-1<<endl;
}
int main(){
     speed();
    //freopen("input.txt", "r", stdin);
ll t;
cin>>t;
while (t--)
 {
  
      solve(); 
      
 }   
     return 0;
}