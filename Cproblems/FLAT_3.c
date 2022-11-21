#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int start=0,len,i;
	char str[10],ch;
	int s[5]={0,1,3,2,4};
	printf("Enter string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		ch=str[i];
		if(s[start]==0){
			if(ch=='a'){
				start=start+1;
			}
			else if(ch=='b'){
				start=start+2;
			}
		}
		else if(s[start]==1){
			if(ch=='b'){
				start=start+2;
			}
			else{
				start=4;
			}
		}
		else if(s[start]==3){
			if(ch=='a'){
				start=start+1;
			}
			else {
				start=4;
			}
		}
		else if(s[start]==2){
			if(ch=='a' || ch=='b'){
				start=4;
			}
		}
		else if(s[start]==4){
			start=4;
		}
	}
	if(s[start]==2){
		printf("String accepted");
	}
	else{
		printf("String rejected");
	}
}
