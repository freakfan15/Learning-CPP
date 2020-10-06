#include<iostream>
using namespace std;

int firstOcc(int* arr, int n, int key){

	//base case
	if(n==0){
		return -1;
	}
	//rec case

	if(arr[0]==key){
		return 0;
	}
	int i= firstOcc(arr+1, n-1, key);
	if(i==-1){
		return -1;
	}
	return i+1;
}

//writing the above fn in a diff matter

int linearSearch(int* a, int i, int n, int key){
	//base case
	if(i==n){
		return -1;
	}

	//rec case

	if(a[i]==key){
		return i;
	}
	return linearSearch(a, i+1, n, key);
}
int main(int argc, char const *argv[])
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	cout<<firstOcc(arr, n, key)<<endl;

	cout<<linearSearch(arr, 0, n, key)<<endl;
	return 0;
}