#include<iostream>
#include<cstring>
using namespace std;

void removeduplicate(char a[], int n){
	int l=strlen(a);
	if(l==0 or l==1){
		return;
	}

	int previous=0;
	for (int current=1; current<l;current++){
		if (a[current]!=a[previous])
		{
			previous++;
			a[previous]=a[current];
		}
	}
	a[previous+1]='\0';
	return;
	
}
int main(){

	char a[1000];
	cin.getline(a,1000);
	removeduplicate(a,1000);
	cout<< a <<endl;

	return 0;
}