#include<iostream>

using namespace std;
int main() {

	int n,no,r,sum_even=0,sum_odd=0;
	cin>>n;

	for(int i=1; i<=n;i++){
		cin>>no;
    int sum_even=0,sum_odd=0;
		while(no!=0){
			r=no%10;
			if(r%2==0){
				sum_even=sum_even+ r;

			}
			else if(r%2==1){
				sum_odd=sum_odd + r;
			}
			no/=10;
		}
		if(sum_even%4==0){
			cout<<"Yes"<<endl;
		}
		else if(sum_odd%3==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}