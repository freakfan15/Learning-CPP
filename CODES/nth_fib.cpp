#include<iostream>
using namespace std;

int fibonnaci(int n){
		int a=0;
		int b=1;
		int c;
		for(int i=1; i<=n-1; i++){
			c=a+b;
			a=b;
			b=c;
		}
		return c;

}
int main(){

	int n;
	cin>>n;

	cout<<"nth fib no is "<<fibonnaci(n)<<endl;


	return 0;
}