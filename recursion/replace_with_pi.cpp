#include<iostream>
#include<string>
using namespace std;

string s2="";
void replace(string s, int i, int len){

	//base case
	if(i==len-1){
    	s2+=s[i];
		return;
	}

	//rec case
	string c_str=s.substr(i, 2);
  	//return c_str;

	if(c_str=="pi"){
		s2+="3.14";
    //return s2;
    	replace(s, i+2, len);
	}
	else{
		s2+=s.substr(i, 1);
    	replace(s, i+1, len);
    
		}
	

    
}

int main(){

	int test;
	cin>>test;
	string s;

	for(int i=0; i<test; i++){
		cin>>s;
		int len=s.length();
    
		replace(s, 0, len);
    	cout<<s2<<endl;
    	s2.clear();


	} 


	return 0;
}