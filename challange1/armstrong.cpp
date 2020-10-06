#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n, org_n,r,sum=0;
	cin>>n;
  org_n=n;
	int digits;
	digits=(log10(org_n) +1);
  
  
	while(org_n!=0){
		r=org_n%10;
		sum=sum + round(pow(r,digits));
		org_n/=10;
	}
  

  if(sum==n){
    cout<<"true"<<endl;
  }
  else{
    cout<<"false"<<endl;
  }
	
	return 0;
}