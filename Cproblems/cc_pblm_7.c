#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		float a,b,c,avg;
		printf("Enter values of a,b,c");
		scanf("%f %f %f",&a,&b,&c);
		avg=(a+b)/2;
		if(avg>c){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		
		t--;
	}
}
