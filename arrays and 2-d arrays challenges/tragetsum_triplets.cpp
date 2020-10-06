#include<iostream>
#include<algorithm>
using namespace std;

void targetsum_triplets(int a[], int n, int key){

	for(int i=0; i<n; i++){	
		int s=i+1, e=n-1;
		
		while(s<e){
			
			int sum=a[i]+a[s]+a[e];
			if(sum==key){
				cout<<a[i]<<", "<<a[s]<<" and "a[e];
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