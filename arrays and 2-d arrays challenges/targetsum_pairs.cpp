#include<iostream>
#include<algorithm>
using namespace std;

void targetsum_pairs(int a[], int n, int key){

		
		int s=0, e=n-1;
		
		while(s<e){
			
			int sum=a[s]+a[e];
			if(sum==key){
				cout<<a[s]<<" and "<<a[e]<<endl;
        s++;
        e--;
			}
			else if(sum>key){
				e--;
			}
			else{
				s++;
			}
			
		}
  

}

int main(){
	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
  
    int key;
    cin>>key;

    sort(a, a+n);

    cout<<endl;
    targetsum_pairs(a, n, key);

    return 0;
}