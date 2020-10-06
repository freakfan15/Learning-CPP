#include<iostream>
using namespace std;

bool isPrime(int num){

	for(int i=2; i<num; i++){
		if(num%i==0){
			return false;
		}
	}

	return true;
}

void prime_visits(int a, int b){
	cin>>a>>b;

	int current_num=a;
	int sum=0;

	while(current_num<=b){
		if(isPrime(current_num)){
			sum+=1;
		}
		current_num++;
	}
	cout<<sum<<endl;
}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;

	int a,b;

	for(int x=0; x<test; test++){
		prime_visits(a, b);
	}

	
	return 0;
}