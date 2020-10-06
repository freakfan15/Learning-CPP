#include<iostream>
using namespace std;

void bubble_sort(int* a, int n ){
	//base case
	if(n==1){
		return;
	}
	//rec case
	for (int i = 0; i < n; i++)
	{
		if(a[i]>a[i+1]){
			swap(a[i], a[i+1]);
		}
	}

	return bubble_sort(a, n-1);
}

//making the same fn by replacing the for loop with recursion
void bubble_sort_recursion(int* a, int j, int n){
	//base case
	if(n==1){
		return;
	}

	if(j==n-1){
		return bubble_sort_recursion(a, 0, n-1);
	}
	//rec case

	if(a[j] > a[j+1]){
		swap(a[j], a[j+1]);
	}

	bubble_sort_recursion(a,  j+1, n);
	return;
}

int main(int argc, char const *argv[])
{
	int a[]={5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);

	//bubble_sort(a, n);
	bubble_sort_recursion(a, 0, n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}