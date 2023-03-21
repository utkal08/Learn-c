#include <stdio.h>
int main(){
    int n  ,i , factorial = 1;
    printf(" Enter the number of which you want factorial \n");
    scanf( "%d ", &n);
     for (  i =1; i <=  n; i++ ){
        factorial *= i;
     }
     printf( " the factorial of %d is : %d\n  " ,n, factorial);
     
return 0;
}