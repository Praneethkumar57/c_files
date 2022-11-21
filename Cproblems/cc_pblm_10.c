//name:slow solution  code:SLOWSOLN

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int t1,n,val,i,worst=0,sum=0,rem,pro=0;
		printf("Enter values of t,n,maximum sum:");
		scanf("%d %d %d",&t1,&n,&val);
		for(i=1;i<=t1;i++){
			if(sum>val){
				i--;
				sum=sum-n;
				break;
			}
			else if(sum==val){
				break;
			}
			else{
				sum=sum+n;
			}
		}
		worst=i-1;
		rem=val-sum;
		
		for(i=0;i<worst;i++){
			pro=pro+pow(n,2);
		}
		
		if(i<t1){
			pro=pro+pow(rem,2);
		}
		
		printf("\nNo of iterations:%d\n",pro);
		
		t--;
	}
}
