#include<stdio.h>
#include<stdlib.h>

int main(){
	int x,i,sum=0;
	printf("Enter a number:");
	scanf("%d",&x);
	
	for(i=1;i<x;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	
	if(sum==x){
		printf("%d is a perfect number",x);
	}
	else{
		printf("%d is not a perfect number",x);
	}
}
