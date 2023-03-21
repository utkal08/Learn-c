#include <stdio.h>
int factorial(int x);
int main(){
int n = 3; 
// printf (" Enter the no of which you want factorial of : \n ");
// scanf("%d", & n);
 printf (" Here is the factorial of the %d  is %d ",  n, factorial (n));

return 0;
}
int factorial(int x){

    if ( x== 1 && x == 0){
        return 1;
    }
    else {
         return  x *factorial(x - 1);
    }
}