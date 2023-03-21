#include <stdio.h>
int main(){
int a[10]={14,69,62,4,6,96,3};
int n;
 printf("Enter the number which you want to search ");
  scanf(" %d ", &n);
  
   for ( int i=0;i<=7;i++){
     if (n==a[i] ){
         printf("%d",i);
     }
   } 
return 0;
}