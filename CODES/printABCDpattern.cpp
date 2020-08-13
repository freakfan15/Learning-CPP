#include<iostream>
using namespace std;

void printabcd(){
	int n;
	cin>>n;
		for (int i = 1; i <= n; ++i)
		{		
			int count_alpha=n-i+1;
			char ch='A';

			for(int j=1;j<=count_alpha;j++){
				cout<<ch;
				ch=ch+1;
			}
			cout<<endl;
		}
	}

int main(){

	

	printabcd();


	return 0;
}