#include<iostream>
using namespace std;

bool subset(int* a, int i, int n, int sum, int cnt){
	//we use recursive tree to solve this problem.

	//base case
	if(i==n){
		if(sum==0 and cnt>0){ //if target sum was other than 0 we would not need to use cnt>0. cnt increases for each case if elemnt of ith index is included and remains 0 if  it is not included.
			return true;
		}
		else{
			return false;
		}
	}

	//rec case
	//we just return two subcases.. 1st if ith element is is included.
	//                              2nd ith elemnt is not included.

	return subset(a, i+1, n, sum+a[i], cnt+1) or subset(a, i+1, n, sum, cnt);

}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;


	while(test--){
		int n;
		cin>>n;
		int a[5];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		bool x=subset(a, 0, n, 0, 0);

		if(x){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}
	return 0;
}