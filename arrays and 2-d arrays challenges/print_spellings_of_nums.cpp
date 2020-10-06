#include<iostream>
using namespace std;

char a[][10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printspellings(int n){

	//base case
	if(n==0){
		return;
	}

	// rec case
	printspellings(n/10);
	int digit=n%10;
	cout<<a[digit]<<" ";

	return;
}

int main(){

	int n;
	cin>>n;
	printspellings(n);


	return 0;
}