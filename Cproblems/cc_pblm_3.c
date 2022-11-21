//we have to find how many melas can cook by taking input strings from user
// let input string arr size=3
//we find how many meals for word pran and inputs are poland,colon,roastp
//no of p in all strings=2,r=1,a=2,n=2
// so we cook 1 meal(i.e we can print pran only one time using those words from the string array)
//we do the same code for the word "codechef"

#include<stdio.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int s,i,j;
		char ch;
		printf("Enter size of array:");
		scanf("%d",&s);
		char arr[s][30];
		printf("Enter names:");
		for(i=0;i<s;i++){
			scanf("%s",&arr[i]);
		}
		int num[6];
		for(i=0;i<6;i++){
			num[i]=0;
		}
		for(i=0;i<s;i++){
			j=0;
			while(arr[i][j]!=NULL){
				ch=arr[i][j];
				if(ch=='c'){
					num[0]++;
				}
				else if(ch=='o'){
					num[1]++;
				}
				else if(ch=='d'){
					num[2]++;
				}
				else if(ch=='e'){
					num[3]++;
				}
				else if(ch=='h'){
					num[4]++;
				}
				else if(ch=='f'){
					num[5]++;
				}
				j++;
			}
		}
	
		int min=100;
		num[0]=num[0]/2;
		num[3]=num[3]/2;
		
		for(i=0;i<6;i++){
			if(num[i]<min){
				min=num[i];
			}
		}
		
		printf("We can cook upto %d meals",min);
		t--;
	}
}
