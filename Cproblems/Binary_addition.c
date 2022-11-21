#include<stdio.h>
#include<stdlib.h>


int main(){
	int top1=-1,top2=-1,top=-1;
	int i,i1,i2,n1,n2,rem,p,num,high;
	int sa[50],s1[50],s2[50],sb[50],o[100];
	
	printf("Enter number1:");
	scanf("%d",&n1);
	while(n1!=0){
		rem=n1%2;
		if(top1==-1){
			top1=top1+1;
			sa[top1]=rem;
		}
		else{
			top1=top1+1;
			sa[top1]=rem;
		}
		n1=n1/2;
	}
	
	i1=top1;
	top1=-1;
	while(i1>=0){
		top1=top1+1;
		s1[top1]=sa[i1];
		i1--;
	}
	//printf("%d\n",s1[top1]);
	
	i1=top1;
	i=i1;
	for(i=0;i<=i1;i++){
		printf("%d",s1[i]);
	}
	printf("\n");
	
	printf("Enter number2:");
	scanf("%d",&n2);
	while(n2!=0){
		rem=n2%2;
		if(top2==-1){
			top2=top2+1;
			sb[top2]=rem;
		}
		else{
			top2=top2+1;
			sb[top2]=rem;
		}
		n2=n2/2;
	}
	
	i2=top2;
	top2=-1;
	while(i2>=0){
		top2=top2+1;
		s2[top2]=sb[i2];
		i2--;
	}
	i2=top2;
	i=i2;
	for(i=0;i<=i2;i++){
		printf("%d",s2[i]);
	}
	printf("\n");
	if(top1>=top2){
		high=top1;
	}
	else{
		high=top2;
	}
	
	//main-block of code
	
	while(high>=0){
	if(top1==-1){
		top1=0;
		s1[top1]=0;
	}
	if(top2==-1){
		top2=0;
		s2[top2]=0;
	}
	num=s1[top1]+s2[top2];
	
	if(num>=2){
		if((num)%2==0){
			top=top+1;
			o[top]=0;
			top1=top1-1;
			top2=top2-1;
			if(top1>=0){
				s1[top1]=s1[top1]+1;
			}
			else if(top2>=0){
				s2[top2]=s2[top2]+1;
			}
			else{
				top1=top1+1;
				s1[top1]=s1[top1]+1;
			}
		}
		else{
			top=top+1;
			o[top]=1;
			top1=top1-1;
			top2=top2-1;
			if(top1>=0){
				s1[top1]=s1[top1]+1;
			}
			else if(top2>=0){
				s2[top2]=s2[top2]+1;
			}
			else{
				top1=top1+1;
				s1[top1]=s1[top1]+1;
			}
		}
	}
	else{
		top=top+1;
		o[top]=num;
		top1=top1-1;
		top2=top2-1;
	}
	high--;
	}
	
	if(num>=2){
		top=top+1;
		o[top]=1;
	}
	
	printf("Binary sum:");
	i=top;
	while(i>=0){
		printf("%d",o[i]);
		i--;
	}
	
}
