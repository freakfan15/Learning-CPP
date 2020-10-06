#include<iostream>
using namespace std;

void findindex(int a[], int i, int m, int n){
	//base case
	if(i==n){
		return;
	}

	//rec case
	if(a[i]==m){
		cout<<i<<" ";
	}

	findindex(a, i+1, m, n);
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[100000];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int m;
	cin>>m;

	findindex(a, 0, m, n);


	return 0;
}