#include <stdio.h>
 void printTable(int*mul, int num, int n){
    printf("Enter the no of  table which you want to\n ");
scanf("%d",mul [n]);
    printf("The multiplication table of %d is : \n",num);
for (int i=0 ; i<n; i++){
    mul[i] = num*(i+1);
    
 }
 for (int i=0; i< n ;i++ ){
    printf("%d x %d = %d \n ", num ,i+1 ,mul [i]);
 }
 
 printf("***********************************************\n\n");
}
int main(){

int mul[3][10];

printTable(mul[0],2,10);
printTable(mul[1], 7,10);
printTable(mul[2], 9,10);

return 0;
}