#include<iostream>
using namespace std;

int main() {

  int max, min, interval;
  cin>>min>>max>>interval;
  int c,f=min;


      while(f<=max){
      c=(5*(f-32))/9;
      cout<<f<<" "<<c<<endl;
      f+=interval;
    }
	
	return 0;
} 