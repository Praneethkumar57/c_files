#include<stdio.h>

int palindrome(int);

int main(){
	int num,rev;
	printf("Enter a number:");
	scanf("%d",&num);
	rev=palindrome(num);
	if(rev==num){
		printf("it is palindrome");
	}
	else{
		printf("it is not palindrome");
	}
}

int palindrome(int num){
	int count=0,sum=0;
	int rem;
	if(num==0){
		return 0;
	}
	rem=num%10;
	int c=num/10;
	if(c>0){
		c=c/10;
		c++;
	}
	printf("%d",c);
	sum=sum+pow(num%10,c)+palindrome(num/10);
	return sum;
}
