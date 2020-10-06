#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c ;
	cin>>a>>b>>c;
	int x,y;

	x=(-b+ sqrt(b*b - 4*a*c))/(2*a);
	y=(-b- sqrt(b*b - 4*a*c))/(2*a);

	if((b*b - 4*a*c)==0){
		cout<<"Real and Equal"<<endl;
		cout<<x<<" "<<y;
	}
	else if((b*b - 4*a*c)>0){
		cout<<"Real and Distinct"<<endl;
		if(x>y){
			cout<<y<<" "<<x;
		}
		else{
			cout<<x<<" "<<y;
		}
	}
	else{
		cout<<"Imaginary"<<endl;
	} 




	return 0;
}