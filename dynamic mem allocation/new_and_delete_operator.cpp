#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	// static allocation +_deallocation is done by compiler itself

	int b[1000];
	cout<<sizeof(b)<<endl;
	cout<<b<<endl; // size will be given but from the symbol table.

	//b cannot be overwritten

	// dynamic mem allocation


	int n;
	cin>>n;

	int* a= new int [n];
	// int* a= new int[n]{0} // for initiallising all values to 0.

	cout<<sizeof(a)<<endl;

	cout<<a<<endl; //variable a that is created inside the static mem
	//

	//no change
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		cout<<a[i]<<" ";
	}

	//free up space
	delete [] a;


	return 0;
}