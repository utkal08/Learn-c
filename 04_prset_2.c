#include <stdio.h>
int main(){
int n= 8;
int i;
int sum = 0;
for( i=1; i<=10;i++){

printf("%d x %d = %d \n", n,i,i*n);

sum = sum + i*n;
}

printf ("the sum is %d ", sum);


return 0;
}