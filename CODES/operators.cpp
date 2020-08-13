#include<iostream>
using namespace std;

int main(){

	//comma operator
	int a ,b,c;

	//assignment operator
	a=10;
	b=20;
	c=30;
	//ternary operator
	if(c>a and c>b){
		cout<<"c is largest"<<endl;
	}

	//turnary operator
	int x =c%2==0?1:0;
	cout<<x<<endl;
	c%2==0?cout<<"even"<<endl:cout<<"odd"<<endl;
	
	//bitwise operator
	x=5;
	int y=7;
	cout<<"AND "<<(x&y)<<endl;
	cout<<"OR "<<(x|y)<<endl;
	cout<<"XOR "<<(x^y)<<endl;

	//shift operator
	x=x<<2;
	cout<<x<<endl;
	cout<<(y>>1)<<endl;

	//uranary operator
	cout<< (&x)<<endl;
	//post increment / decrement operator
	a=10;
	int z=a++;//z=10, a=11
	cout<<z<<endl;
	z=++a;  //a=12, z=12
	cout<<z<<endl;

	//compound assignment operator
	a=10;
	a*=3;
	cout<<"A after multiply "<<a<<endl;
	a%=5;
	cout<<"A after modulo "<<a<<endl;

	b=5;
	b<<1;
	cout<<"B after left shift "<<b<<endl;
		

	return 0;
}