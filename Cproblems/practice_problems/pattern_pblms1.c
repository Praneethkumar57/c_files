#include<stdio.h>

void pattern1(int x){
	int i,j;
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern2(int x){
	int i,j;
	for(i=1;i<=x;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

int main(){
	int x;
	printf("Enter number:");
	scanf("%d",&x);
	pattern1(x);
	printf("\n");
	pattern2(x);
}


