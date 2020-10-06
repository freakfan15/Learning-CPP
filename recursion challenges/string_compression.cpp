#include<iostream>
using namespace std;

void compress(string s, int i, int n, int cnt){

	//base case
	if(i==n-1){
		cout<<s[i]<<'1';
		return;
	}

	//rec case
	
	while(s[i+1]==s[i]){
		i++;
		cnt++;
	}
	cout<<s[i]<<cnt+1;

	compress(s, i+1, n, 0);
}
int main(){

	string s;
	cin>>s;
	int n=s.length();

	compress(s, 0, n, 0);


	return 0;
}