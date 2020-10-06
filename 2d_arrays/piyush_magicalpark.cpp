#include<iostream>
using namespace std;

int main(){

  int N,M,K,S;
  cin>>N>>M>>K>>S;

  char a[100][100];

  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      cin>>a[i][j];
    }
  }

  
  for(i=0;i<N;i++){
		for(j=0;j<M;j++){

			if(S<K){
				break;
			}
			else if(a[i][j]=='.'){
					S=S-2;
			}
			else if(a[i][j]=='*'){
					S=S+5;
			}
			else{
          break;
      }
      if(j!=N-1){
        S--;
			}
      
    }
  }

	if(S>=K){
		cout<<"Yes"<<endl;
		cout<<S<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

  return 0;
}