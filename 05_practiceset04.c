// hint :
// fib(n) =fib(n-1) +fib(n-2)
// fib(1) = 0
// fib (2) = 1
#include <stdio.h>
int fibonacci(int );
int main(){
int n ,i;
printf("Enter the value of n \n");
scanf("%d",&n);
for(i =0; i<= n; i++) 

printf("%d \n" ,fibonacci(i));
return 0;
}
int fibonacci (int n){

if ( n==1 || n==0){
        return 1;
    }

else {
    return  fibonacci(n - 1) +fibonacci(n-2);
}
    
}