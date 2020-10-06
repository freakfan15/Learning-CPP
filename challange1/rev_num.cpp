#include<iostream>
using namespace std;
int main() {

	
	int n, rev_num=0, r;
	cin>>n;

	while(n!=0){
		r=n%10;
		rev_num= rev_num*10 +r;
		n/=10;
	}
	cout<<rev_num;
	return 0;
}