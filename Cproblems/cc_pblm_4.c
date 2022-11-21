//number of credits(codechef)
//x type subjects have 4 credits,y type subjects have 2 credits and z type subjects have 0 credits

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int x,y,z;
		printf("\nvalues of x,y,z:");
		scanf("%d %d %d",&x,&y,&z);
		int sum;
		sum=(x*4)+(y*2);
		printf("Total credits:%d",sum);
		
		t--;
	}
}
