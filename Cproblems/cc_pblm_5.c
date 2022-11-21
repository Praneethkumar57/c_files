//ticket fine code:TCKTFINE

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int x,p,q;
		printf("Enter fine:");
		scanf("%d",&x);
		printf("Enter no of passengers:");
		scanf("%d",&p);
		printf("Enter no of persons have tickets:");
		scanf("%d",&q);
		int fine;
		if(p>q){
			fine=(p-q)*x;
			printf("Total Fine:%d",fine);
		}
		else{
			printf("Wrong input");
		}
		
		t--;
	}
}
