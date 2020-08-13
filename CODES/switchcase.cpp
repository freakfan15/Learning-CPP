#include <iostream>
using namespace std;
int main() {
	
	char ch;
	cin>>ch;

	switch(ch){
		case 'B' : cout<<"Burger"<<endl;
					break;
		case 'M' : cout<<"Maggi"<<endl;
					break;
		case 'C' : cout<<"Coke"<<endl;
					break;

		default : cout<<"item nit available"<<endl;
 	} 
}