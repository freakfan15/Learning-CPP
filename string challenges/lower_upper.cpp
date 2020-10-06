#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cin>>ch;

	if(ch>='a' and ch<='z'){
		cout<<"lowercase"<<endl;
	}

	else if(ch>='A' and ch<='Z'){
		cout<<"UPPERCASE"<<endl;
	}

	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}