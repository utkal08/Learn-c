#include <stdio.h>
float average (int x,int y ,int z){
    int avg ;
    avg = (x+y+z)/3;
    return avg;
}
int main(){
    int a,b,c;
    printf("Enter the  number 1 \n");
    scanf("%d\n", &a);
    printf("Enter the  number2 \n");
    scanf("%d \n", &b);
    printf("Enter the  number3  \n");
    scanf("%d \n", &c);
printf( " The average of three number is %f ", average(a,b,c));
return 0;
}