#include<stdio.h>

int fibo(int);

int main(){
	printf("Enter a number:");
	int n;
	scanf("%d",&n);
	int val;
	val=fibo(n);
	printf("value of nth place :%d",val);
}

int fibo(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		int sub;
		sub=fibo(n-1)+fibo(n-2);
		return sub;
	}
}
