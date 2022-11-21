#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
}*front=NULL,*rear=NULL,*temp,*p;

void enqueue(){
	int i,x,n;
	printf("Enter no of elememnts:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter value:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		if(front==NULL){
			front=temp;
			rear=temp;
		}
		else{
			rear->next=temp;
			rear=temp;
		}
	}
}

void dequeue(){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		temp=front;
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
}

void traversal(){
	if(front==NULL){
		printf("Queue is empty");
	}
	else{
		p=front;
		while(p!=NULL){
			printf("%d->",p->data);
			p=p->next;
		}
	}
}

int main(){
	int opt;
	do{
		printf("1Enqueue \n2.Dequeue \n3.Traverse");
		printf("Enter option:");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				enqueue();
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				traversal();
				break;
		}
	}while(opt!=0);
}
