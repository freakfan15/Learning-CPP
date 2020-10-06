#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){

	for (int i=1;i<=n-1;i++){
		int e=a[i];
		//place the currebt elemnt at the right position in the sorted part

		int j=i-1;
		while(j>0 and a[j]>e){
			a[j+1]=a[i];
			j=j-1;

		}
		a[j+1]=e;
	}
	{
		/* code */
	}
	
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[1000];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	insertion_sort(a,n);

	for(int i=0; i<n;i++){
		cout<<a[i]<<", ";
	}

	return 0;
}