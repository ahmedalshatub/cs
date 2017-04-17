#include <iostream>
#include <string>
using namespace std;
int main() {
string s1,s2;
cout<<"enter the first sentence\n";
getline(cin,s1);

cout<<"enter search word\n";
getline(cin,s2);


int x1=0,x2=0,co=0,pos;

for(;x1<s1.length();x1++){
	if(s1[x1]==s2[x2]){
  if(co==0)
			pos=x1;

		co++;
		x2++;
	}
	else{
		   x2=0;
		   co=0;
		   if (s1[x1] == s2[x2]) {
			   	   	   pos=x1;
		               	co++;
		                x2++;
		               }   }
	
if(co==s2.length())
	break;
}
if(co==s2.length())
cout<<"it exisit in position\t"<<pos;
else
	cout<<"it not exist\n";
   return 0;
}
