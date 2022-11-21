#include<stdio.h>

int main(){
	char str[20];
	int i,j,len;
	printf("Enter a string:");
	scanf("%s",&str);
	len=strlen(str);
	
	for(i=0;i<=len;i++){
		for(j=0;j<i;j++){
			printf("%c ",str[j]);
		}
		printf("\n");
	}
}
