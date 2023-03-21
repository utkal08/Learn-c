#include <stdio.h>
int main(){
int n;
int i;
printf("Enter the number of which you want table \n");
scanf("%d",&n);
for( i=1; i<=10;i++){

printf("%d x %d = %d \n", n,i,i*n);
}
return 0;
}