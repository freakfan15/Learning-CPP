#include<iostream>
using namespace std;

#define ll long long

//sieve approach-generating an array containing prime numbers
void prime_sieve(int *p){
	// mark all odd numbers prime
	for(int i=3; i<=1000000; i+=2){
		p[i]= 1;
	}

	//sieve
	for(ll i=3; i<=1000000; i+=2){
		
		//mark all multiples of i as not prime
			for(ll j=i*i; j<=1000000; j=j+i){
				p[j]=0;
			}
    
	}

	//special case
	p[2]=1;
	p[1]=p[0]=0;
}


int main(int argc, char const *argv[])
{
	int p[1000000]={0};
	prime_sieve(p);

	int csum[1000000]={0};

	//precompute the primes upto an index i
	for(int i=1; i<=1000000; i++){
		csum[i]=csum[i-1] +p[i];
	}

	int test;
	cin>>test;

	for(int x=1; x<=test; x++){
    int a, b;
		cin>>a>>b;

		cout<<csum[b] - csum[a-1]<<endl;
  }
	return 0;
}