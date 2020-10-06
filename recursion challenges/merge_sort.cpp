#include<iostream>
using namespace std;

void merge(int * arr, int s, int e){

	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;

	int temp[200001];

	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
		}

	}

	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=e){
		temp[k++]=arr[j++];
	}

	//now we need to copy the elements of temp array into the main array
	for(int i=s; i<=e; i++){
		arr[i]=temp[i];
	}
}

void mergesort(int arr[], int s, int e){

	//bas ecase
	if(s>=e){
		return;
	}

	//rec case
	//follow 3 steps
	
	//1. divide
	int mid=(s+e)/2;
	
	//2. split recursively the arrays in  s to mid and mid+1 to e
	mergesort(arr, s, mid);
	mergesort(arr, mid+1, e);

	//3. merge the arrays using two pointer approach 
	merge(arr, s, e);
}

int main(){

	int arr[200001];
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	mergesort(arr, 0, n-1);

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}