#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
	// base case
	if(n==1){
		return true;
	}

	//rec case
	if(arr[0]<arr[1] and isSorted(arr+1, n-1)){   // arr+1 indicates the adress of arr is shifted 1 unit right
		return true;
	}

	return false;
}
int main(int argc, char const *argv[])
{
	int arr[]={1,2,3,14,5};

	cout<<isSorted(arr, 5);

	return 0;
}