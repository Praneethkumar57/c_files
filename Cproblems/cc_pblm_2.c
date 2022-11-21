#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int n,k,v,i;
		printf("\nEnter array n size:");
		scanf("%d",&n);
		int arr[n];
		printf("Enter array elements:");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		printf("Enter array k size:");
		scanf("%d",&k);
		printf("Enter average value:");
		scanf("%d",&v);
		
		int sum=0;
		for(i=0;i<n;i++){
			sum=sum+arr[i];
		}
		
		int x;
		x=(v*(n+k)-sum);
		if(x%k==0 && x>=0){
			printf("%d",x/k);
		}
		else{
			printf("Not possible");
		}
		
		t--;
	}
}
