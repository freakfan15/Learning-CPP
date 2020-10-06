#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cin>>n;
	char a[1000];
	char largest[1000];
	int l=0;
	int largest_l=0;

	cin.get(); // to take the null character that is being stored while taking input from cin.getline()
	
	for(int i=0;i<n;i++){
		cin.getline(a,1000);
		l=strlen(a);
		if(l>largest_l){
			largest_l=l;
			strcpy(largest, a);
		}

	}
	cout<<largest<<" and "<<largest_l<<endl;
	

	return 0;
}