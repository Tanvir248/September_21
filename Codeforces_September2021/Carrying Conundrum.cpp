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
ll solve(ls s){   
   ls s1, s2, s3;
    
    for (int i = 0; i < s.sz; i++) {
        if (i % 2 == 0) {
            s1.pb(s[i]);
        }
        else if (i % 2 == 1) {
            s2.pb(s[i]);
            }
    }
    if (s.sz==1) {
        return stoi(s1)-1; 
      }

    return (stoi(s1) + 1)*(stoi(s2)+1)-2;
}
int main(){
     speed();
   //freopen("input.txt", "r", stdin);

 ll t; 
 cin >> t;
  while(t--){
  ls a;
  cin>>a;
    cout<<solve(a); 
     ed
}     
     return 0;
}