#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*start1=NULL,*start2=NULL,*temp1,*temp2,*p1,*p2;

int i;

int main(){
	int x,roll,num;
	int opt;
	printf("Enter no of students:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		printf("Enter roll no of the student:");
		scanf("%d",&roll);
		printf("Select subject 1.Biology 2.Computer:");
		scanf("%d",&opt);
		
		temp1=(struct node *)malloc(sizeof(struct node ));
		temp1->data=roll;
		temp1->next=NULL;
		
		if(opt==1){
		
			if(start1==NULL){
				start1=temp1;
				p1=start1;
			}
			else{
				p1->next=temp1;
				p1=temp1;
			}
		}
		else if(opt==2){
			
			if(start2==NULL){
				start2=temp1;
				p2=start2;
			}
			else{
				p2->next=temp1;
				p2=temp1;
			}
		}
		else{
			printf("Invalid input");
		}
	}
	
	do{
		printf("\nEnter 0 to EXIT\n");
		printf("\n1.Printing Roll no of Biology Students \n2.Printing Roll no of Computer Science Students\n");
		printf("Enter your option:");
		scanf("%d",&num);
		switch(num){
		case 1:
			printf("Biology Students roll no:");
			p1=start1;
			while(p1!=NULL){
				printf("%d  ",p1->data);
				p1=p1->next;
			}
			break;
			
		case 2:
			printf("Computer Science Students roll no:");
			p2=start2;
			while(p2!=NULL){
				printf("%d  ",p2->data);
				p2=p2->next;
			}
			break;
		}
	}
	while(num!=0);
}
