#include<bits/stdc++.h>
using namespace std;
int main(){
    int ansn=0, n, num0 =0, num1 =1;
    cin>>n;
   cout<<num0<<" "<<num1<<" ";
  for (int i = 2; i < n; i++)
  {
      ansn = num1+num0;
      cout<<ansn<<" ";
    
    num0 = num1;
    num1 = ansn;
  }
  
   cout<<endl; 
}