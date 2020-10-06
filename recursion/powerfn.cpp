#include<iostream>
using namespace std;

int power(int a, int n){

	//base case
	if(n==1){
		return a;
	}

	return a*power(a, n-1);
}

// more efficient way to calculate power  (a**n/2)**2
int fast_power(int a, int n){

	//base case
	if(n==0){
		return 1;
	}

	//rec case
	int small_ans=fast_power(a, n/2);
	small_ans*=small_ans;

	//check if n is odd in each stack
	if(n & 1){
		small_ans=small_ans*a;
	}

	return small_ans;
}
int main(int argc, char const *argv[])
{
	int a, n;
	cin>>a>>n;

	cout<<fast_power(a, n);
	return 0;
}