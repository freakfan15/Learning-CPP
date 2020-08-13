#include<iostream>
using namespace std;

int main()
{

	int x=0;
	int y=0;

	int ch;
	ch=cin.get();

	while(ch!='\n'){

		if (ch=='N' or ch=='n')
		{
			y++;
		}
		else if (ch=='S' or ch=='s')
		{
			y--;
		}
		else if (ch=='E' or ch=='e'){
			x++;
		}
		else{
			x--;
		}

		ch=cin.get();	
	}

	cout<<"y is "<<y<<" x is "<<x<<endl;

	int i;
	for(i=1; i<=x; i++){
		cout<<'E';
	}

	for(i=-1;i>=x;i--){
		cout<<'W';

	}

	for(i=1; i<=y; i++){
		cout<<'N';
	}

	for(i=-1;i>=y;i--){
		cout<<'S';

	}

	return 0;
}