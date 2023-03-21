#include<stdio.h>
 int main (){
      int a ,fac = 1;
       printf(" Enter any number of which you want factorial");
        scanf(" %d",&a);
        for (int i = 1; i <= a; i++)
        {
            fac*= i;

        }
        printf(" Factorial of entered number is %d", fac);
        return 0;

 }