#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int convert(string s, int i, int len){
	//base case
	if(s[i+1]=='\0'){
		return s[i]-'0';
	}
	//rec case
	int ans=(s[i]-'0')*(pow(10, len-(i+1))) + convert(s, i+1, len);

	return ans;
}


int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int len=s.length();

	cout<<convert(s, 0, len)<<endl;
	return 0;
}