#include<iostream>
using namespace std;

int staircase_search(int a[][1000], int n, int k){

	int i=0, j=n-1;
	int smallest=a[0][0], largest=a[n-1][n-1]; 
	if(k<smallest or k>largest){
		return -1;
	}

	while(i<n and j>=0){
		int cno=a[i][j];
		if(cno==k){
			cout<<i<<","<<j<<endl;
      return 0; 
		}
		else if(cno>k){
			j--;
		}
		else{
			i++;-
		}
	}

}
int main(){

  int n;
  cin>>n;
  int a[1000][1000];
  int k;
  cin>>k;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }

  staircase_search(a, n, k);


	return 0;
}