#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int s,i,flag=0,j,k,l,inc1=0,inc2=0,flag1=0;
		printf("Enter array size:");
		scanf("%d",&s);
		int a[s];
		int b[s];
		printf("Enter array a elements:");
		for(i=0;i<s;i++){
			scanf("%d",&a[i]);
		}
		printf("Enter array b elements:");
		for(i=0;i<s;i++){
			scanf("%d",&b[i]);
		}
		
		for(j=0;j<s;j++){
			for(i=0;i<s;i++){
				if(a[i]==b[i]){
					flag++;
				}
				else{
					flag=0;
				}
			}
			if(flag!=s && j!=s){	
				for(k=0;k<s;k++){
					if(a[k]<b[k]){
						a[k]++;
						inc1++;
						//printf("%d \n",a[k]);
						break;
					}
				}
				if(inc1==0){
					flag1=0;
					break;
				}
				else{
					inc1=0;
				}
				
				for(k=0;k<s;k++){
					if(b[k]<a[k]){
						b[k]++;
						inc2++;
						//printf("%d \n",b[k]);
						break;
					}
				}
				
				if(inc2==0){
					flag1=0;
					break;
				}
				else{
					inc2=0;
				}
			}
			
		}
		if(flag!=s && flag1!=0){
			for(i=0;i<s;i++){
				if(a[i]==b[i]){
					flag++;
				}
				else{
					flag=0;
				}
			}
		}
		
		if(flag==s){
			for(i=0;i<s;i++){
				printf("%d  ",a[i]);
			}
			for(i=0;i<s;i++){
				printf("%d  ",b[i]);
			}
		}
		else{
			printf("both are not same");
		}
		t--;	
	}
}
