#include<iostream>
#include<algorithm>
using namespace std;

//define a comparator fn
bool compare(it a, int b){
	cout<<"comparing "<<a<<" and "<<b<<endl;
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int a[1000];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	//sort an array using sort() fn
	sort(a, a+n, compare);

	for(int i=0; i<n;i++){
		cout<<a[i]<<", ";
	}
}