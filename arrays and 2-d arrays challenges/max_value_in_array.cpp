#include<iostream>
#include<algorithm>
using namespace std;

int max_value(int a[], int n){
	sort(a, a+n);
	int max_val=a[n-1];
	return max_val;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int a[n]={0};

	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	//cout<<max_value(a,n)<<endl;
	cout<<max_value(a, n)<<endl;


	return 0;
}