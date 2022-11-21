#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int count=1,i=0,place1=0,place2=0,len,flag=0,j;
	char str[20];
	char arr[20][20];
	char ch;
	printf("Enter a sentence:");
	gets(str);
	len=strlen(str);   
	
	for(i=0;i<len;i++){
		ch=str[i];
		if(ch==' '){
			if(flag>=1){
				j=j+1;
			}
			else if(place1==0 && place2==0){
				flag=1;
			}
			else{
				arr[place1][place2]='\0';
				count++;
				place1=place1+1;
				place2=0;
				flag=1;
			}
			
		}
		else if(ch==',' || ch=='.'){ 
			arr[place1][place2]='\0';
				place1++;
				place2=0;
				count++;
			if(ch==','){
				arr[place1][place2]=',';
				place2=place2+1;
			}
			else{
				arr[place1][place2]='.';
				place2=place2+1;
			}	
		}
	
		else{
			if(arr[place1][place2-1]==','){
				arr[place1][place2]='\0';
				count++;
				place1=place1+1;
				place2=0;
			}
			
			arr[place1][place2]=ch;
			place2=place2+1;
			flag=0;
			
		}
	}
	arr[place1][place2]='\0';
	
	for(i=0;i<=place1;i++){
		printf("%s\n",arr[i]);
	}
	printf("\nno of tokens:%d",count);
}
