#include <stdio.h>
int main(){
int n;
 printf( " Enter the number of which you want table : \n ");
 scanf(" %d", &n);
 for ( int i = 0; i < 10 ; i++){ 
   int num;
    int result = (i+1)*n;
    printf( " %d X %d = %d  \n", n, i+1,result);
 }
return 0;
}