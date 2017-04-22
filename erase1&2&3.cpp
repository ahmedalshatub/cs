#include <iostream>
#include <string>
using namespace std;
int main() {
string s1,s2;
int p;

////erase without pos
//////////////////////////////////
cout<<"enter the first sentence\n";
getline(cin,s1);
   for (int i = 0; i<s1.length() ; ++i) {
        s1[i]=0;
    }
   s1[0]='\0';

    cout<<"it  has been empty";
    cout<<"\t"<<s1;
/////////////////////////////////////////////////////////////////

    
    
    
    
    //erase with pos
/////////////////////////////////////////////////////////////////


    cout<<"enter the first sentence\n";
    getline(cin,s1);
    int pos;
    cout<<"enter the position:\t";
    cin>>pos;
    for (int i = pos; i<s1.length() ; ++i) {
           s1[i]=0;
       }
      s1[pos]='\0';

       cout<<"it  has been erase";
       cout<<"\t"<<s1;

////////////////////////////////////////////////////////
       
       
       
       
//erase with position and number of charecters
///////////////////////////////////////////////////////
       cout<<"enter the first sentence\n";
       getline(cin,s1);
       int pos1,n;
    cout<<"enter the position:\t";
    cin>>pos1;
    cout<<"enter the number of erase charcters:\t";
    cin>>n;
    int j=pos1,i=pos1+n;

    for(;i<s1.length();i++){
    	s1[j]=s1[i];
    	j++;

    }
    s1[j]='\0';


cout<<s1;
////////////////////////////////////////////






return 0;
}
