#include<stdio.h>

void natural(int n);

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	natural(n);
}

void natural(int n){
	//printf("%d",n);
	if(n){
		printf("%d--\n",n); //decreasing
		natural(n-1);
	}
	else{
		return;
	}
	printf("%d--\n",n); //increasing
}
