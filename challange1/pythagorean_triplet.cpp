#include<iostream>
using namespace std;
int main() {
	
	long long int N;
	cin>>N;
	float a,b,c;

	
	
	float m,n;

	if(N%2==0){
		m=N/2.0; n=1;
		
	}

	else if(N%2==1){
		m=(N+1)/2.0; n=(N-1)/2.0;
		
	}

	a=m*m-n*n;
	b=2*m*n;
	c=m*m+n*n;

  
	if(N==1 or N==2){
		cout<<"-1"<<endl;
	}
    else{
      if(a>b){
        cout<<a<<" "<<c;
      }
      else if (b>a){
        cout<<b<<" "<<c;
      }
    }
	


	return 0;
}