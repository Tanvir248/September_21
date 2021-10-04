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
ls solve(int a, int b, ls s){   
  
  for (int x = 0; x < 2; x++) {
    for (int i = 0; i < s.sz; i++) {
      int j = s.sz - i - 1;
      if (s[i] != '?') {
        if (s[j] == '?') {
          s[j] = s[i];
        } else if (s[i] != s[j]) {
          return "-1";
        }
      }
    }
    reverse(s.B, s.E);
  }
  a -= count(s.B, s.E, '0');
  b -= count(s.B, s.E, '1');
  int ques = count(s.B, s.E, '?');
  bool emptyMid = (s.sz % 2 == 1 && s[s.sz / 2] == '?');
  if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0)) {
    return "-1";
  }
  if (a % 2 == 1 || b % 2 == 1) {
    int i = s.sz / 2;
    if (s[i] != '?') {
      return "-1";
    }
    s[i] = (a % 2 == 1 ? '0' : '1');
    if (a % 2 == 1) {
      a--;
    } else {
      b--;
    }
  }
  if (a % 2 == 1 || b % 2 == 1) {
    return "-1";
  }
  for (int i = 0; i < s.sz; i++) {
    if (s[i] == '?') {
      int j = s.sz - i - 1;
      if (a > 0) {
        a -= 2;
        s[i] = s[j] = '0';
      } else {
        b -= 2;
        s[i] = s[j] = '1';
      }
    }
  }
  return s;
}
int main(){
     speed();
    //freopen("input.txt", "r", stdin);
ll t;
cin>>t;
while (t--)
 {
    int a, b;
    ls x;
 
  cin >> a >> b;
  cin>>x; 
      cout<< solve(a, b, x); 
      ed 
 }   
     return 0;
}