#include<stdio.h>
#include<math.h>

int main(){
	int x,num,count=0,sum=0,rem,val;
	printf("Enter a number:");
	scanf("%d",&x);
	num=x;
	
	while(x!=0){
		count++;
		x=x/10;
	}
	x=num;

	while(x>0){
		rem=x%10;
		
		sum=sum+pow(rem,count);
		x=x/10;
	}
	
	if(sum==num){
		
		printf("Armstrong number");
	}
	else{
		printf("Not an Armstrong number");
	}
}

