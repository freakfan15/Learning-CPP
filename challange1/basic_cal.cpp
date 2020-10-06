#include<iostream>
using namespace std;
int main() {

	char ch;
	cin>>ch;
	int n1,n2;

	do{
		if(ch=='+'){
			cin>>n1>>n2;
			cout<<n1+n2<<endl;
		}
		else if (ch=='-'){
			cin>>n1>>n2;
			cout<<n1-n2<<endl;
		}

		else if (ch=='*'){
			cin>>n1>>n2;
			cout<<n1*n2<<endl;
		}

		else if (ch=='/'){
			cin>>n1>>n2;
			cout<<n1/n2<<endl;
		}

		else if (ch=='%'){
			cin>>n1>>n2;
			cout<<n1%n2<<endl;
		}
    else if (ch=='x' or ch=='X'){
      break;
    }
		
		
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}

		cin>>ch;
	}
	while(ch!='x' or ch!='X');

	return 0;
}