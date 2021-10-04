#include <iostream>
using namespace std;
#define ed cout<<endl;
void str_lexemes(string s){
    int n = s.size();
    string res;
    bool s_val = false;
    bool s_cmnt = false;
    for (int i=0; i<n; i++){
      cout<<s[i];
	  if(s[i+1]==' '){
		  	ed
		  }
	
	  if(s[i+1]=='='){
		  	ed
	  }
	  if(s[i]=='='){
		  	ed
	  }
	  if(s[i+1]==';'){
		  	ed
	  }
	  if(s[i]==';'){
		  	ed
	  }
	  if(s[i+1]==','){
		  	ed
	  }
	  if(s[i]==','){
		  	ed
	  }
	
    }
	ed
}
int main()
{
	cout<<"input :"<<endl;
    string ls = "int a=10,b;"
    "b = 5;";
	ed
	cout<<"lexmes output for given string :"<<endl;
str_lexemes(ls);

ed
   return 0;
}