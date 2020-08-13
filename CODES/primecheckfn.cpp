#include<iostream>
using namespace std;

int primecheck(int n){
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;

}

void printprimes(int N){

	for(int j=2; j<=N;j++){
		if(primecheck(j)){
			cout<<j<<" ";
		}
	}
}
int main()
{
	int n;
	cin>>n;

	if(primecheck(n)){
		cout<<n<<" is prime"<<endl;
	}
	else{
		cout<<n<<" isn't prime"<<endl;
	}

	printprimes(n);

	
	return 0;
}