#include <stdio.h>
float fharenheit(int a);
int main(){
    int a;
    printf( "Enter the value of  temperature in celcius %d \n");
    scanf("%d", &a);
    printf("The value of temperature in faherenheit is %f \n" , fharenheit(a));
return 0;

}
float fharenheit(int a){
float result ;
result = (float)( a*9/5 +32);
return result ;
}