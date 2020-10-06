#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[100];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int cs=0,ms=0;

	for(int i=0;i<n;i++){
		cs=cs+a[i];

		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	cout<<"max sum is "<<ms<<endl;
	return 0;
}