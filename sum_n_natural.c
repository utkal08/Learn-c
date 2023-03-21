#include<stdio.h>
 

 int main(){
     int a ,sum =0 ;
      printf(" Enter any number up to which you want sum of ");
       scanf("%d",&a);
       for (int i = 0; i <= a; i++)
       {
        sum += i ;

       }
    printf(" Sum of the n natural number is %d",sum);
    return 0;
       
        
 }