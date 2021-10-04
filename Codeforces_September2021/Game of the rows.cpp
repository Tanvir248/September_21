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
int n, k, have[5], cnt[5];
void solve(){   
   //freopen("input.txt", "r", stdin);
 	cin >> n >> k;
	have[2] = 2 * n, have[4] = n;
	for(int i = 0; i < k; i++){
		int x;
		cin >> x;
		while(x >= 3)
			if(have[4] > 0)
				x -= 4, have[4]--;
			else if(have[2] > 0)
				x -= 2, have[2]--;
			else
				no
		if(x > 0)
			cnt[x]++;
	}
	while(cnt[2])
		if(have[2] > 0)
			cnt[2]--, have[2]--;
		else if(have[4] > 0)
			cnt[2]--, have[4]--, have[1]++;
		else
            cnt[2]--, cnt[1] += 2;
	if(cnt[1] > have[1] + have[2] + have[4] * 2)
		no
        else
    yes
}
int main(){
     speed();
    solve();
 return 0;
}