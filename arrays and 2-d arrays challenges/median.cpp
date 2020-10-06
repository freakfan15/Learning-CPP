#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n, int arr3[]){

	int i=0, j=0, k=0;

	while(i<n and j<n){

		if(arr1[i] < arr2[j]){
			arr3[k++]=arr1[i++];
		}
		else{
			arr3[k++]=arr2[j++];
		}
	}

	//storing remaining elements of arr1 and arr2

	while(i<n){
		arr3[k++]=arr1[i++];
	}

	while(j<n){
		arr3[k++]=arr2[j++];
	}
	

}

int main(){

	int arr1[1000] = {0};
	int arr2[1000]= {0};
	int n;
	cin>>n;

	for(int i=0; i<n; i++ ){
		cin>>arr1[i];
	}


	for(int i=0; i<n; i++ ){
		cin>>arr2[i];
	}
  
    int arr3[2*n]; 
    mergeArrays(arr1, arr2, n, arr3); 
      
  	int median_index= n-1;

  	cout<<arr3[median_index];

	return 0;
}