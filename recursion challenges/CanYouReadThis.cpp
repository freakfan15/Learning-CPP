#include<iostream>
#include<string>
using namespace std;

string s1="";
void separate(string s){

for(int i=0; i<s.length(); i++){
	s1.push_back(s[i]);

	//taking care of last char
	if(i==s.length()-1){
		cout<<s1<<endl;
	}
	else if(s[i+1]>='A' and s[i+1]<='Z'){
		cout<<s1<<endl;
		s1.clear();
	}
}

}
int main()
{
	string s;
	cin>>s;

	separate(s);


	return 0;
}