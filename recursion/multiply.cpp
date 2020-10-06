#include<iostream>
using namespace std;

int multiply(int a, int b){
	//base case
	if(b==0){
		return 0;
	}

	return a + multiply(a, b-1);
}
int main(int argc, char const *argv[])
{
	int a, b;
	cin>>a>>b;

	cout<<multiply(a, b);
	return 0;
}