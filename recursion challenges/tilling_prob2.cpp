/* Tiling problem
there is a wall 4*n . there are bricks each of length 4*1. Find the total num of ways we can arrange the tiles.

Sol'n:- either it can be placed horizontally or it can be placed vertically. So, it will the sum of verticall ways + horizontal ways.
f(n)=f(n-1)+f(n-4) */

#include<iostream>
using namespace std;

int totalways(int n, int m){

	

	//base case
  	if(n<0){
    	return 0;
  	}
	if(n==m or n==1){
    	return 1;
  	}

	return totalways(n-1, m) + totalways(n-m, m);

}

int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	int n,m;
	

	for(int i=0; i<test; i++){
		cin>>n>>m;
		totalways(n, m);
	}

	return 0;
}