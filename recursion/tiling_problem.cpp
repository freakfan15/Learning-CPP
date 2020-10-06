/* Tiling problem
there is a wall 4*n . there are bricks each of length 4*1. Find the total num of ways we can arrange the tiles.

Sol'n:- either it can be placed horizontally or it can be placed vertically. So, it will the sum of verticall ways + horizontal ways.
f(n)=f(n-1)+f(n-4) */

#include<iostream>
using namespace std;

int totalways(int n){

	//base case
  	if(n<0){
    	return 0;
  	}
	if(n==4 or n==1){
    	return 1;
  	}

	return totalways(n-1) + totalways(n-4);

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	cout<<totalways(n);

	return 0;
}