#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[20];
	int len,i,j,k,lon,p1=0,p2=0,loc,val,m,n,flag,o;
	char arr[100][100],ch;
	printf("Enter a string:");
	scanf("%s",&str);
	len=strlen(str);
	loc=len;
	for(i=0;i<len;i++){
		for(j=0;j<=i;j++){
			val=j;
			for(k=0;k<loc;k++){
				arr[p1][p2]=str[val];
				p2=p2+1;
				val++;
			}
			arr[p1][p2]='\0';
			
			
			if(j>0 && i>0){
				for(o=1;o<=j;o++){
					for(m=0;m<p2;m++){
						if(arr[p1-o][m]==arr[p1][m]){
							flag++;
						}
					}
					if(flag==m){
						break;
					}
				}
				if(flag!=m){
					for(m=0;m<p2;m++){
						printf("%c",arr[p1][m]);
					}
					printf("\n");
				}
			}
			else{
				for(m=0;m<p2;m++){
					printf("%c",arr[p1][m]);
				}
				printf("\n");
			}
			flag=0;
			p1=p1+1;
			p2=0;
			
		}
		loc--;
	}
	
}
