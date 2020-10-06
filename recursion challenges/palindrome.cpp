#include<iostream>
using namespace  std;

void palindrome(char* str, int n){
	int s=0;
	int e=n-1;
	int mid=(s+e)/2;

	while(s<=mid){

		if(str[s]==str[n-(s+1)]){
			s++;
		}
		else{
			cout<<"false"<<endl;
      return;
		}
	}

	if(s==mid+1){
		cout<<"true"<<endl;
	}
}


int main(){
	int n;
	cin>>n;

	char str[n];
	
	for(int i=0; i<n; i++){
		cin>>str[i];
	}

	palindrome(str, n);


	return 0;
}