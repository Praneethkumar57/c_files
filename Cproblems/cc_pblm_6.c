
//cartrip code:CARTRIP

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int x;
		printf("Enter how many kms travelled:");
		scanf("%d",&x);
		if(x>300){
			printf("Money he had to pay:%d",x*10);
		}
		else{
			printf("Money he had to pay:3000");
		}
		
		t--;
	}
}
