#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout<<"please enter the first string:\n";
    getline(cin,str);
    int num;
    string ch;
    cout<<"pls enter the charcters\t";
    getline(cin,ch);
    cout<<"enter the number of append\t";
    cin>>num;

    int i=str.length();

    while (num--){
        str[i]=ch[0];
        i++;

    }
    //print it with for loop
    for (int j = 0;j<i;++j) {
        cout<<str[j];
    }
    cout<<endl;

    /*or you can use this
    while (num--){
        str+=ch;
    }
  cout<<str;
      */


    return 0;
}
