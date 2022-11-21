#include<stdio.h>

int binary(int arr[],int,int,int,int);

int main(){
	int n,i,key,low,high,value;
	printf("Enter array size:");
	scanf("%d",&n);
	low=0;
	high=n;
	int arr[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter key:");
	scanf("%d",&key);
	value=binary(arr,n,low,high,key);
	if(value==-1){
		printf("element not found");
	}
	else{
		printf("element found at %d",value);
	}
}

int binary(int arr[],int size,int low,int high,int key){
	int mid;
	mid=(low+high)/2;
	if(low>high){
		return -1;
	}
	if(arr[mid]==key && low<=high){
		return mid;
	}
	if(arr[mid]>key){
		binary(arr,size,low,mid-1,key);
	}
	else{
		binary(arr,size,mid+1,high,key);
	}
}
