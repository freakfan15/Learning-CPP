#include<iostream>
using namespace std;
int main(){
	int x=5000;
	float y=10.131;
	bool weather_is_rainy= true;
	double pi=3.1431313;
	char  ch='A';

	cout<<"Int"<<sizeof(x) << endl;
	cout<<"FLoat"<<sizeof(y) <<endl;

	cout<< "Bool "<<sizeof(weather_is_rainy) <<endl;

	cout<<"double" <<sizeof(pi)<<endl;
	cout<< "Char"<<sizeof(ch)<<endl;


	return 0;
}