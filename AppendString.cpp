#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"please enter the first string:\n";
    getline(cin,str);
    string str2;
    cout<<"pls enter the second string\t";
    getline(cin,str2);
    
    int i=str.length();
for(int j=0;j<str2.length();j++){
	str[i]=str2[j];
	i++;
}

    //print it with for loop

for (int co=0;co<i; ++co) {
	cout<<str[co];
}
    cout<<endl;








    /*or you can use this
    str+=str2;
    cout<<str;
      */


    return 0;
}
