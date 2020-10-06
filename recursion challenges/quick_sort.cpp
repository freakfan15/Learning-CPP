#include<iostream>
using namespace std;

int partition(int*a, int s, int e){
	int i=s-1;
	int j=s;
	int pivot=a[e];  //assigning last element as pivot element
	
	for(; j<=e-1; j++){   //j goes till e-1 i.e one element before the pivot element
		if(a[j]<=pivot){
			i++;
			swap(a[i], a[j]);
		}
	}	
	//now bring the pivot element in b/w the arr of smallest elements and arr of bigger elements
	swap(a[i+1], a[e]);
	return i+1;
}

void quickSort(int* a, int s, int e){

	//base case
	if(s>=e){
		return;
	}

	//rec case
	int p=partition(a, s , e);  //p= index of pivot element derived from the above fn. 
	quickSort(a, s, p-1);
	quickSort(a, p+1, e);

}

int main(){

	int n;
	cin>>n;;
	int a[200001];

	for(int i=0; i<n ; i++){
		cin>>a[i];
	}

	quickSort(a, 0, n-1);

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}


	return 0;
}