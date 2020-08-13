#include<iostream>
using namespace std;

int main(){
	int digits=0;
	int letters=0;
	int spaces=0;

	char ch;
	ch=cin.get();

	while(ch!='$'){

		if((ch>='0'&ch<='9')){
			digits++;
		}
		else if((ch>='a'&ch<='z') or (ch>='A'&ch<='Z')){
			letters++;
		}
		else if(ch==' ' or ch=='\n' or ch=='\t'){
			spaces++;
		}

		ch=cin.get();
	}

	cout<<digits<<endl;
	cout<<letters<<endl;
	cout<<spaces<<endl;

	
return 0;	
}