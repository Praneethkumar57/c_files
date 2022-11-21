#include<stdio.h>

int main(){
	int t,i;
	scanf("%d",&t);
	while(t>0){
		int n,k,rem=0,val;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&val);
			val=val+rem;
			if(val-k<0){
				printf("NO %d\n",i+1);
				break;
			}
			else{
				rem=val-k;
			}
		}
		if(i==n){
			printf("YES\n");
		}
		t--;
	}
}
