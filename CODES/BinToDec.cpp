#include<iostream>
using namespace std;
int main() {

	int N;
	cin>>N;
	int no, p=1, ans=0;
	while(N>0){
		cin>>no;

		while(no>0){
			int r=no%10;
			ans=ans+ r*p;
			p=p*2;
			no=no/10;
		}		



		N=N-1;			
	}
	return 0;
}