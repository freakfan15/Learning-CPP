#include<iostream>
#include<algorithm>
using namespace std;

void maxsum1_subarrays(int a[], int n){

	int maxsum=0;
	int left, right;
	for(int i=0; i<n; i++){
		for(int j=i; j<n;j++){
			//for printing subarrays
			int csum=0;
			for(int k=i; k<=j; k++){
				csum+=a[k];
			}
			if(csum>maxsum){
				maxsum=csum;
				left=i;
				right=j;
			}
		}
		
	}
	cout<<maxsum<<endl;

	for(int k=left; k<=right;k++){
		cout<<a[k]<<", ";
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

maxsum1_subarrays(a,n);


	return 0;
}