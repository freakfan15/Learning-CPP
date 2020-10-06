#include<iostream>
using namespace std;

int fib(int n){
	if(n==0 or n==1){
		return n;
	}

	// return fib(n-1)+ fib(n-2); //writing this in a bit elaborated manner
	int f1= fib(n-1);
	int f2= fib(n-2);

	return f1 + f2;	
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fib(n)<<endl;
	return 0;
}