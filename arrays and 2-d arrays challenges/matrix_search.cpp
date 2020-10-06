#include<iostream>
using namespace std;

bool matrix_search(int a[][100], int n, int m, int key){

	int i=0, j=m-1;
	int smallest=a[0][0], largest=a[n-1][m-1];

	if(key<smallest or key>largest){
		return 0;
	}

	while(i<n and j>=0){
		int cno=a[i][j];
		if(cno==key){
			return 1;
		}
		else if(cno>key){
			j--;
		}
		else{
			i++;
		}
  }

  if(i==n and j==0){
    return 0;
  }
}

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;

	int a[100][100];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}

	int key;
	cin>>key;

	cout<<matrix_search(a, n, m, key);
	return 0;
}