#include <iostream>
using namespace std;

void readline(char a[], int n, char delim='\n'){
	char ch=cin.get();
	int i=0;
	while(ch!=delim){
		a[i]=ch;
		i++;

		if (i==(n-1))
		{
			break;
		}
		ch=cin.get();
	}
	a[i]='\0';

	return;
}

int main(int argc, char const *argv[])
{
	char a[1000];
	//readline(a,1000,'$');
	cin.getline(a,1000,'#');
	cout<<a<<endl;
	return 0;
}