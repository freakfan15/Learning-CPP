#include<iostream>
#include<climits>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[100];
	int cum_sum[100]={0};
	cin>>a[0];
	cum_sum[0]=a[0];

	for(int i=1;i<n;i++){
		cin>>a[i];
		cum_sum[i]=cum_sum[i-1]+ a[i];
	}

	/*for(int i=0;i<n;i++){
		cout<<cum_sum[i]<<", ";
	}*/
	int maxsum=INT_MIN;
	//int left=-1,right=-1;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int csum=0;

			csum=cum_sum[j]-cum_sum[i-1];
			if (csum>maxsum)
			{
				maxsum=csum;
				//left=i;
				//right=j;
			}


		}
	}

	
	cout<<"max sum is "<<maxsum<<endl;

	//array of max sum
	//for(int k=left;k<=right;k++){
	//	cout<<a[k]<<", ";
	//}





	return 0;
}