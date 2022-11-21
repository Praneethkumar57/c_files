#include<stdio.h>

int main(){
	int x,i,j;
	printf("Enter a number:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			if(j==1 || j==i ||i==x){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
