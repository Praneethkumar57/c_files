
//weights   code:WGHTS

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int w,x,y,z;
		printf("Enter 4 values:");
		scanf("%d %d %d %d",&w,&x,&y,&z);
		if(w==x || w==y || w==z || w==x+y || w==y+z || w==x+z || w==x+y+z){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
		
		t--;
	}
}
