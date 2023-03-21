#include <stdio.h>
int main(){

int n ;

printf("Enter the value of n \n");
scanf("%d",&n);
for ( int i = 0; i<n;i++) {
printf("the first n natural number is %d\n", i +1);
}
// do{
   
//     printf(" the first n natural number is %d \n",i+1 );
// i++;
// }
// while( i<n);
return 0;
}