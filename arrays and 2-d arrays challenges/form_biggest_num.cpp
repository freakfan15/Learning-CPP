#include<iostream>
#include<algorithm>

using namespace std;

void biggest_num(string a[], int n){

	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	// main algorithm
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){

			if(a[j]+a[i]>a[i]+a[j]){
				swap(a[i], a[j]);
			}
		}
	}

	//printing
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
}
int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	int n;
	string a[100];

	for(int x=0; x<test; x++){
		biggest_num(a, n);
		cout<<endl;
	}
	return 0;
}