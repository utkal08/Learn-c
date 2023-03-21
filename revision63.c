#include <stdio.h>
void sumandavg( int a ,int b, int *sum , float *avg){
    *sum = a+b;
    *avg= (float)(a+b)/2;
}
int main(){
int i =2;
int j =5;
int  sum ;
float avg;
sumandavg(i,j,&sum , &avg);
printf("The sum of the two number is %d ", sum);
printf("The sum of the two number is %f ", avg);

return 0;
}