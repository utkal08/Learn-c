#include <stdio.h>
 float force( float x) {
    float result ;
    result = x*9.8;
    return result;
 }
int main(){
float mass ;
 printf (" Enter the value of mass \n");
 scanf("%f", &mass );
printf( " force of attraction on given body is : %f", force(mass ));
    return 0;
}