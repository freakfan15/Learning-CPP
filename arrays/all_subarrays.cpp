#include<iostream>
#include<algorithm>
using namespace std;

void all_subarrays(int a[], int n){

	for(int i=0; i<n; i++){
		for(int j=i; j<n;j++){
			//for printing subarrays

			for(int k=i; k<=j;k++){
				cout<<a[k];
			}
			cout<<" ";
		}
		cout<<endl;
	}
}
int main(){

int n;
cin>>n;

int a[10];

for(int i=0;i<n;i++){
	cin>>a[i];

}

sort(a,a+n);

all_subarrays(a,n);


	return 0;
}