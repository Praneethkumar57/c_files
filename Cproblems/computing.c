 #include "stdio.h" 
 #include "stdlib.h"
  int main() 
  {
   int arr[5]={5,1,2,3,6};
   int i,j,sum=0,num=1;
   for(i=0;i<5;i++){
       num=1;
       for(j=0;j<i;j++){
           num=num*2;
       }
       num=num*arr[i];
       sum=sum+num;
   }
   printf("%d",sum);
   return 0; 
   
  } 
