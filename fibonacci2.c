#include <stdio.h>
int main(){
 int a =0, b=1,n;
  int c  ;
  printf("Enter the value of n");
  scanf("%d",&n);

   printf(" %d,%d ",a,b);
   for(int i=2;i<=n;i++){
     c= a+b;
     printf("%d ",c);
     a=b;
     b=c;

   } 
return 0;
}