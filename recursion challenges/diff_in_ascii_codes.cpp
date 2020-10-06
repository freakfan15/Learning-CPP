#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string s1="";
	string s;
	cin>>s;
	int n=s.length();
	
	for(int i=0; i<n; i++){
		if(i==n-1){
			cout<<s[i];
		}
		else{
			cout<<s[i]<<s[i+1]-s[i];
		}
	}

	return 0;
}