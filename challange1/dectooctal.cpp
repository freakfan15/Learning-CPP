#include<iostream>
#include<math.h>
using namespace std;
int main() {

	int no, r;
	
  
  
    cin>>no;
    int i=0, oct_num=0;
    while(no!=0){
      
      r=no%8;
      oct_num=oct_num+r*(pow(10,i));
      no/=8;
      i++;
      
    }
    cout<<oct_num<<endl;
  
  
	return 0;
}