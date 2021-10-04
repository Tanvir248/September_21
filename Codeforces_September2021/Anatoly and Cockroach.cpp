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
lln ans;
lln minimum(lln a, lln b){
	if(a<b){
		return a;
	}else if(a==b)
	return b;

	return b;
}
lln solve(lln n){   
   //freopen("input.txt", "r", stdin);
   lln cnta=0, cntb=0, cntr=0, cntr1=0;
   char ch;
   for (ll i = 0; i <n; i++)
   {
	   cin>>ch;
	   if(i%2==0){
		   if(ch=='b'){
			   cntb++;
		   }else{
			   cnta++;
		   }
	   }else{
		   if(ch=='r'){
			   cntr++;
		   }else{
			   cntr1++;
		   }
	   }
   }
   ans =minimum(max(cntb, cntr),max(cnta, cntr1));
	return ans;
}
int main(){
     speed();
lln a;
cin>>a;
cout<<solve(a);  
     ed
     return 0;
}