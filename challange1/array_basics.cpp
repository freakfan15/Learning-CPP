#include<iostream>
using namespace std;

int main(){

	//init of array
	int a[10]={0};

	//size of
	cout<<sizeof(a)<<endl;
	int no_of_elements=sizeof(a)/sizeof(int);
	cout<<n<<endl;
	
	//update single index
	a[8]=100;
	
	//input all the elements
	for(int i=0; i<10;i++){
		cin>>a[i];
	}
	//print all the first 10 elements
	for(int i=0; i<10; i++){
		cout<<a[i]<<", ";
	}
	return 0;
}