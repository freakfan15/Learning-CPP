#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{

	long long int size=pow(10, 18);
	char ch[size];
	cin>>ch;

	int i=0;
	
	for(int i=0; ch[i]!='\0'; i++){
		int digit= int(ch[i]);
		if(ch[i]==9){
			continue;
		}
		
		else if(digit >5){
			digit= 9-digit;
		}
		ch[i]=char(digit);

	}


	return 0;
}