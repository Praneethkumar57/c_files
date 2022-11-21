#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch,ch2;
	char s[20];
	printf("Enter string:");
	gets(s);
    int sum=0,len,i,value1,value2;
    len=strlen(s);
    for(i=0;i<len;i++){
        ch=s[i];
        if(ch=='I'){
        value1= 1;
        }
        else if(ch=='V'){
           value1= 5;
        }
        else if(ch=='X'){
            value1= 10;
        }
        else if(ch=='L'){
            value1= 50;
        }
        else if(ch=='C'){
            value1= 100;
        }
        else if(ch=='D'){
            value1= 500;
        }
        else if(ch=='M'){
            value1= 1000;
        }
        if(i<len-1){
        	ch2=s[i+1];
        if(ch2=='I'){
        value2= 1;
        }
        else if(ch2=='V'){
           value2= 5;
        }
        else if(ch2=='X'){
            value2= 10;
        }
        else if(ch2=='L'){
            value2= 50;
        }
        else if(ch2=='C'){
            value2= 100;
        }
        else if(ch2=='D'){
            value2= 500;
        }
        else if(ch2=='M'){
            value2= 1000;
        }
		}
		else{
			value2=0;
		}
        
        printf("%d %d\n",value1,value2);
        if(value2>0){
            if(value1>value2){
                sum=sum+value1;
            }   
            else if(value1==value2){
                sum=sum+value1;
            }
            else if(value1<value2){
            	printf("%d\n",value2-value1);
                sum=sum+value2-value1;
                i=i+1;
            }
        }
        else{
            sum=sum+value1;
        }
    }
    printf("%d",sum);
}
