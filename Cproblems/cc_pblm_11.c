#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	
	while(t>0){
		int maxt,maxn,sumn;
		scanf("%d %d %d",&maxt,&maxn,&sumn);
		int count=0;
		int iter=0;
		
		while(count<maxt && sumn>0){
			sumn=sumn-maxn;
			if(sumn>=0){
				iter=iter+(maxn*maxn);
			}
			else{
				sumn=sumn+maxn;
				iter=iter+(sumn*sumn);
				break;
			}
			count++;
		}
		
		printf("%d",iter);
		
	}
}
