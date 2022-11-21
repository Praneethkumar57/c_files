#include<stdio.h>

void reverse(int);

int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	reverse(num);
}

void reverse(int num){
	if(num%10==0 && num/10==0){
		return;
	}
	printf("%d",num%10);
	reverse(num/10);
}
