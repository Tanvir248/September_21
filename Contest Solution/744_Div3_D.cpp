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
#define vi vector<lln>
#define mi map<int, int>
#define pi pair<lln, lln>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}  
void print_ans( vector<vi> cnt){
           

  for(auto it:cnt)
        {
            for(auto x:it)
            {
                cout<<x<<" ";
            }
            ed
        }
}
void solve(){   
  //freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
    while (t--)
    {
        lln n;
        cin>>n;
        vi v(n);
        priority_queue<pi> pq;
        for(lln i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i])
            {
                pq.push({v[i],i} );
            }
        }
         vector<vi> cnt;
        while(pq.sz>1)
        {
            lln num1=pq.top().first;
            lln ind1=pq.top().second+1;
            pq.pop();
            lln num2=pq.top().first;
            lln ind2=pq.top().second+1;
            pq.pop();
            num1--;
            num2--;
            cnt.push_back({ind1,ind2});
            if(num1>0)
            {
                pq.push({num1,ind1-1});
            }
            if(num2>0)
            {
                pq.push({num2,ind2-1});
            }
        }
        cout<<cnt.sz;
		ed
      print_ans(cnt);
    }
}
int main(){
     speed();

       solve();  
	
     return 0;
}