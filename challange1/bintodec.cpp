#include<iostream>
#include<math.h>
using namespace std;
int main() {

	int n,no, r;
	cin>>n;
  
  for(int j=1; j<=n; j++){
    cin>>no;
    int i=0, dec_num=0;
    while(no!=0){
      
      r=no%10;
      dec_num=dec_num + r*(pow(2,i));
      no/=10;
      i++;
      
    }
    cout<<dec_num<<endl;
  }
  
	return 0;
}