#include <stdio.h>
int main(){
int i = 455 ;
int *ptr ;
int **ptr2 ;
ptr = &i ;
ptr2 = &ptr;
printf("The value of i is %d \n", **ptr2);
return 0;
}