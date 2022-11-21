#include<stdio.h>

int print(int arr[],int,int);

int main(){
	int size,i,count=0,val;
	printf("Enter size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	val=print(arr,count,size);
}

int print(int arr[],int count,int size){
	if(count==size){
		return;
	}
	printf("%d  ",arr[count]);
	return print(arr,count+1,size);
}
