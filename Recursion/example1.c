#include<stdio.h>

int fact(int);

int main(){
	printf("enter number:");
	int n;
	scanf("%d",&n);
	int val;
	val=fact(n);
	printf("factorial:%d",val);
}

int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		int smallval;
		smallval=fact(n-1);
		return n*smallval;
	}
	
}
