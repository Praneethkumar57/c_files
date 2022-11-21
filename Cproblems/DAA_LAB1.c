#include<stdio.h>

int main(){
	int arr[6]={2,3,5,3,1,2};
	int sum=0,x=1,i,j;
	for(i=0;i<6;i++){
		for(j=0;j<i;j++){
			x=x*2;
		}
		sum=sum+arr[i]*x;
		x=1;
	}
	printf("%d",sum);
}
