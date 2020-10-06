#include<iostream>
#include<string>
using namespace std;

char maxFrequency(string s){

	int max=0;
	char vidx;
	char result;
	int a[256]={0};
	

	for(int i=0; i<s.size(); i++){
		vidx=s[i];
		a[vidx]++;
		//now we check for max value
		if(max< a[vidx]){
			max=a[vidx];
			result=vidx;
		}	
	}
	return result;

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;

	cout<<maxFrequency(s)<<endl;

	return 0;
}