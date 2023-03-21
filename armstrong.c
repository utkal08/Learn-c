#include <stdio.h>
#include <math.h>
int main(){
int  i =0,n,m=0 ,k = 0,y=0;
 printf("Entyer any number which you want to check");
 scanf("%d",&n);
 n=m;
  while (n!=0){
     i++;
    n = n/10;
  }
  n=m;
   while (n!=0){
    k = n%10 ;
    y = y +pow(k,i);
    n= n/10;

   }
   if(y == n){
     printf("Enter number is armstrong" );
   }
return 0;
}