#include<iostream>
using namespace std;

void maxsum_subarray(int a[], int n){

	
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int cs=0, ms=0;

	for(int i=0;i<n; i++){
		cs=cs +a[i];

		if(cs<0){
			cs=0;
		}

		ms=max(cs, ms);
	}

	cout<<ms<<endl;
}

int main(int argc, char const *argv[])
{
	int a[100000]; int n;
	int test_cases;
	cin>>test_cases;

	for(int x; x<test_cases; x++){
		maxsum_subarray(a, n);
	}

	



	return 0;
}