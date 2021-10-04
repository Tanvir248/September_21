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
  
  //start writing A
  for (ll i = 0; i < 45; i++)
  {
      if(i==22 || i==23|| i==24){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
  for (ll i = 0; i < 45; i++)
  {
      if(i== 21|| i==22 || i==25 ||i==24){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
  
  
  for (ll i = 0; i < 45; i++)
  {
      if(i== 20|| i==21 || i==25 ||i==26){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
   
  for (ll i = 0; i < 45; i++)
  {
      if(i== 19|| i==20 || i==26 ||i==27){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
   
  for (ll i = 0; i < 45; i++)
  {
      if(i== 18|| i==19 || i==27 ||i==28){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
   
  for (ll i = 0; i < 45; i++)
  {
      if(i== 17|| i==18 || i==28 ||i==29){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
   
 // Make A 2nd part
for (ll i = 0; i < 45; i++)
  {
      if(i>= 16&& i<=30){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
  for (ll i = 0; i < 45; i++)
  {
      if(i>= 15&& i<=31){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
  
   for (ll i = 0; i < 45; i++){
  
      if(i== 14|| i==15 || i==31 ||i==32){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
   for (ll i = 0; i < 45; i++){
  
      if(i== 13|| i==14 || i==32 ||i==33){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed

   for (ll i = 0; i < 45; i++){
  
      if(i== 12|| i==13 || i==33 ||i==34){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed

   for (ll i = 0; i < 45; i++){
  
      if(i== 11|| i==12 || i==34 ||i==35){
          cout<<"*";
      }else{
        cout<<" ";
      }
  }ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}