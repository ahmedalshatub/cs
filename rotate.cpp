#include <iostream>
using namespace std;
void rotate(int arr[6], int i) {
	int n=6;
	int j;
	for (j = 0; j < n; ++j) {
		int t = arr[n-1];
		for (i = n-1; i > j; i--)
			arr[i] = arr[i - 1];

		arr[i] = 0;
		for ( i = 0; i < n; ++i) {
	cout<<arr[i]<<" ";
}
		cout<<endl;
	}
}

int main() {
	int i=0;
	
int arr[6]={1,2,3,4,5,6};
for ( i = 0; i < 6; ++i) {
	cout<<arr[i]<<" ";
}
cout<<endl;


	rotate(arr, i);


//after
for ( i = 0; i < 6; ++i) {
	cout<<arr[i]<<" ";
}cout<<endl;


    return 0;
}
