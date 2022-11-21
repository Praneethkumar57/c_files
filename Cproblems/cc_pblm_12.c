#include<stdio.h>

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t>0){
		int n,flag;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i!=j){
					if(arr[i]==arr[j]){
						flag=1;
						break;
					}
				}
			}
			
			if(flag==0){
				printf("%d\n",arr[i]);
			}
			flag=0;
		}
		t--;
	}
}
