
//name:odd pairs  code:ODDPAIRS

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int x,i,j;
		scanf("%d",&x);
		int pairs=0;
		for(i=1;i<x;i++){
			for(j=i+1;j<=x;j++){
				if((i+j)%2==1){
					pairs=pairs+2;
				}
			}
		}
		printf("No of pairs:%d\n",pairs);
		
		t--;
	}
}
