#include<stdio.h>

int main(){
	int x,i,j;
	printf("Enter a number:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			if(i==1 || j==i || j==x){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
