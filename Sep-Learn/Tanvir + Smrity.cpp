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
  ed
   for (ll i = 0; i < 2; i++)
   {
     for(ll j =0; j<45; j++){
       cout<<"*";
     }
ed   }
   
   for (ll i = 0; i < 17; i++){
     for(ll j =0; j<24; j++){
       if(j==22 || j==23)
       cout<<"*";
       else{
         cout<<" ";
       }
     }
ed   }

  for (ll i = 0; i < 1; i++)
   {
     for(ll j =0; j<26; j++){
        if(j==20||j==21||j==22 || j==23||j==24||j==25)
       cout<<"*";
       else
         cout<<" ";
       }
ed 
  }

ed
ed
ed
   for (ll i = 0; i < 4; i++)
   {
     for(ll j =0; j<26; j++){
       if(j==23)
       cout<<"*";
       else
       cout<<" ";
     }
ed   }
  
   for (ll i = 0; i < 1; i++)
   {
     for(ll j =0; j<45; j++){
       if(j<=15 || j>=30){
         cout<<" ";
       }else
       cout<<"*";
     }
ed   }
   for (ll i = 0; i < 4; i++)
   {
     for(ll j =0; j<26; j++){
       if(j==23)
       cout<<"*";
       else
       cout<<" ";
     }
ed   }
ed
ed
// making s-> first part
for (ll i = 0; i < 45; i++)
{
  if(i == 28 || i==29){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 23 || i==24){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 20 || i==21){
    cout<<"*";
  }else
  cout<<" ";
}ed

   for (ll i = 0; i < 45; i++)
{
  if(i == 18 || i==19){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 15 || i==16){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 13 || i==14){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 11 || i==12){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 10|| i==11){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 9 || i==10){
    cout<<"*";
  }else
  cout<<" ";
}ed
//making s second part

for (ll i = 0; i < 45; i++)
{
  if(i == 10 || i==11){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 12 || i==13){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 15 || i==16){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 18 || i==19){
    cout<<"*";
  }else
  cout<<" ";
}ed
 for (ll i = 0; i < 45; i++)
{
  if(i == 21 || i==22){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 23 || i==24){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 26 || i==27){
    cout<<"*";
  }else
  cout<<" ";
}ed


   for (ll i = 0; i < 45; i++)
{
  if(i == 29 || i==30){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 30 || i==31){
    cout<<"*";
  }else
  cout<<" ";
}ed
// makig s third part
for (ll i = 0; i < 45; i++)
{
  if(i == 31 || i==32){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 30 || i==31){
    cout<<"*";
  }else
  cout<<" ";
}ed

   for (ll i = 0; i < 45; i++)
{
  if(i == 29 || i==30){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 26 || i==27){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 24 || i==25){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 22 || i==23){
    cout<<"*";
  }else
  cout<<" ";
}ed

for (ll i = 0; i < 45; i++)
{
  if(i == 18 || i==19){
    cout<<"*";
  }else
  cout<<" ";
}ed
for (ll i = 0; i < 45; i++)
{
  if(i == 14 || i==15){
    cout<<"*";
  }else
  cout<<" ";
}ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}