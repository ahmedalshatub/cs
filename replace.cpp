#include <iostream>
#include <string>
using namespace std;

int main() {
string a2;
string b2;
int pos,n;
cout<<"please enter the first string:\n";
getline(cin,a2);
cout<<"please enter the replace string:\n";
getline(cin,b2);
cout<<"enter the position:\t";
cin>>pos;
cout<<"enter the number of charecters:\t";
cin>>n;

int x1=0,i;
for(i=pos;i<pos+n;i++ ){
	if(x1<b2.length()){
	a2[i]=b2[x1];
	x1++;}
	else{
		break;
		i++;
	}

}
int  j=pos+n;


for(;j<a2.length();j++){

	a2[i]=a2[j];
	i++;


}
a2[i]='\0';


cout<<a2<<"\n"<<b2<<endl;

	return 0;
}
