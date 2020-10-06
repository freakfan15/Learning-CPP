#include<iostream>
using namespace std;

char char_type(char ch){

	if(ch>='a' and ch<='z'){
		return 'L';
	}

	else if(ch>='A' and ch<='Z'){
		return 'U';
	}

	else{
		return 'I';
	}

}

int main(int argc, char const *argv[])
{
	char ch;
	cin>>ch;

	cout<<char_type(ch)<<endl;

	
	return 0;
}