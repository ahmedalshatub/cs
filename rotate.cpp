#include <iostream>
using namespace std;
void rotate(int arr[5], int i) {
	int j;
	for (j = 0; j < 5; ++j) {
		int t = arr[4];
		for (i = 4; i > j; i--) 
			arr[i] = arr[i - 1];
		
		arr[i] = 0;
	}
}

int main() {
	int i=0;
int arr[5]={1,2,3,4,5};
for ( i = 0; i < 5; ++i) {
	cout<<arr[i]<<" ";
}
cout<<endl;


	rotate(arr, i);
	
	
//after
for ( i = 0; i < 5; ++i) {
	cout<<arr[i]<<" ";
}cout<<endl;


    return 0;
}
