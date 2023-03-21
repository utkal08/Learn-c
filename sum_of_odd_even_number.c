#include<stdio.h>
  
  int main(){
     int i, a ,e_sum=0 ,o_sum=0;
      printf(" Entered any number ");
       scanf("%d", &a);
for ( i = 1; i <= a; i++)
{

    if (a %2==0)
{
 e_sum =  e_sum +i;
}
    else 
{
 o_sum = o_sum + i;  
}

    }
    printf("Sum of the even number is %d \n",e_sum);
    printf("Sum of the odd number is %d",o_sum);
       
       return 0;
         }

