#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	
	int a[1000][1000];
	int val=1;

	//talking input in array
	for(int row=0;row<m;row++){
		for(int col=0;col<n;col++){
			a[row][col]=val;
			val+=1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

  cout<<"\n"<<"\n";


    //making wave like print.
	for(int col=0;col<n;col++){

		if(col%2==0){
			for(int row=0;row<m;row++){
				cout<<a[row][col]<<" ";
			}
		}	
		else{

			for(int row=m-1;row>=0;row--){
				cout<<a[row][col]<<" ";
			}
			}
      cout<<endl;
		}
		
	

	return 0;
}