#include<iostream>
using namespace std;

void wave_elements(int a[1000][1000], int m, int n){

	int row,col;
	for(col=0; col<=n-1 ; col++){
		if(col%2==0){
			for(row=0 ; row<m ; row++)	{
				cout<<a[row][col]<<", ";
			}
		}
		else{
			for(row=m-1 ; row>=0 ; row--)	{
				cout<<a[row][col]<<", ";
			}
		}
	}
  cout<<"END";
}


int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	int a[1000][1000];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

	wave_elements(a, m, n);

	return 0;
}