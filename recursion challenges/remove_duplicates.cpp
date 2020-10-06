#include<iostream>
#include<string>
using namespace std;

string s2="";
void formatting(string s, int i, int len){

	//base case
	if(i==len){
		return;
	}

	//rec case
	s2+=s[i];
	while(s[i]==s[i+1] and i!=len-1){
		i++;
	}
	formatting(s, i+1, len);
}

int main(){

	string s;
	cin>>s;
	int len=s.length();

	formatting(s, 0, len);
	cout<<s2<<endl;



	return 0;
}