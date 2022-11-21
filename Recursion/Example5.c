#include<stdio.h>

int sumofdigits(int);

int main(){
	int n,value;
	printf("Enter number:");
	scanf("%d",&n);
	value=sumofdigits(n);
	printf("sum of digits: %d",value);
}

int sumofdigits(int n){
	if(n/10==0){
		return n;
	}
	return n%10+sumofdigits(n/10);
}
