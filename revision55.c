#include <stdio.h>
int fibonacci(int );
int main(){
int n ,i ;
printf("enter the value of n \n");
scanf("%d ", &n);
 for ( i= 0; i<=n; i++ )

    printf( " %d\n" ,fibonacci(i));
return 0;
}
int fibonacci(int x){
if ( x== 1 ||  x==0){
    return 1;
}
    else {
        return fibonacci(x-1)+ fibonacci(x-2);
    }
}