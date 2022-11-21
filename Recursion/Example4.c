#include<stdio.h>

int sum(int);

int main(){
	int n,value;
	printf("Enter a number:");
	scanf("%d",&n);
	value=sum(n);
	printf("sum:%d",value);
}

int sum(int n){
	if(n==1){
		return 1;
	}
	return n+sum(n-1);
}
