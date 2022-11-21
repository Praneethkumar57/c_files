#include<stdio.h>

void func(int arr[],int x,int n){
	int i;
	if(x>n){
		
		for(i=0;i<2*n;i++){
			printf("%d ",arr[i]);
		}
		return;
	}
	for(i=0;i<2*n;i++){
		if(arr[i]==0 && (i+x+1)<2*n && arr[i+x+1]==0){
			arr[i]=x;
			arr[i+x+1]=x;
			
			func(arr,x+1,n);
			
			arr[i]=-1;
			arr[i+x+1]=-1;
		}
	}
}

int main(){
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	int size=2*n;
	int arr[size];
	for(i=0;i<2*n;i++){
		arr[i]=0;
	}
	int x=1;
	func(arr,x,n);
}
