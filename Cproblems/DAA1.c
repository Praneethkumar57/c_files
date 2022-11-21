#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2,i,j=0,high,num,num1,num2,total,count=0;
	printf("Enter degree of 1st polynomial:");
	scanf("%d",&n1);
	int pol1[n1+1];
	int pol2[n2+1];
	for(i=n1;i>=0;i--){
		printf("Enter coefficent of x^%d:",i);
		scanf("%d",&pol1[j]);
		j++;
	}
	j=0;
	printf("Enter degree of 2nd polynomial:");
	scanf("%d",&n2);
	for(i=n2;i>=0;i--){
		printf("Enter coefficent of x^%d:",i);
		scanf("%d",&pol2[j]);
		j++;
	}
	if(n1>=n2){
		high=n1;
	}
	else{
		high=n2;
	}
	int output[high+1];
	if(n1==n2){
		for(i=0;i<=n2;i++){
			output[i]=pol1[i]+pol2[i];
		}
		for(i=0;i<=n2;i++){
			printf("%dx^%d + ",output[i],(high-i));
		}
	}
	else{
		if(n1>n2){
			j=0;
			num=n1-n2;
			for(i=0;i<=n1;i++){
				if(count!=num){
					output[i]=pol1[i];
					count++;
				}
				else{
					output[i]=pol1[i]+pol2[j];
					j++;
				}
			}
			for(i=0;i<=n1;i++){
				printf("%dx^%d + ",output[i],(high-i));
			}
		}
		else{
			j=0;
			num=n2-n1;
			for(i=0;i<=n2;i++){
				if(count!=num){
					output[i]=pol2[i];
					count++;
				}
				else{
					output[i]=pol1[j]+pol2[i];
					j++;
				}
			}
			for(i=0;i<=n2;i++){
				printf("%dx^%d + ",output[i],(high-i));
			}
		}
	}
	
	
}
