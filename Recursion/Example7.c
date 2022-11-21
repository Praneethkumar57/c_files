#include<stdio.h>

int noofdigits(int,int);

int main(){
	int num,val,count=1;
	printf("Enter a number:");
	scanf("%d",&num);
	val=noofdigits(num,count);
	printf("%d",val);
}

int noofdigits(int num,int count){
	if(num/10==0){
		return count;
	}
	noofdigits(num/10,count+1);
}
