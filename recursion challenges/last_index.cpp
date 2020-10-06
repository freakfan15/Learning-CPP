#include<iostream>
using namespace std;

int j=0;
int last_index(int* arr, int i, int n, int key){

	//base case
	
	if(i==0){
		return -1; 
	}


	//rec case
	if(arr[i]==key){
		 return i;
		
	}
  
	return last_index(arr, i-1, n, key);



}
int main(){
	int n;
	cin>>n;

	int a[1000];

	for (int j = 0; j < n; j++)
	{
		cin>>a[j];
	}
	
	int key;
	cin>>key;

	cout<<last_index(a, n-1, n, key)<<endl;
	

	return 0;
}