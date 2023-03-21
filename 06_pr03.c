#include <stdio.h>
void change(int *a);
int main(){
int a = 4;
change (&a);
printf( "The changed value is %d \n",a );

return 0;
}
void change(int *a){
    int temp;
temp = 10 *(*a);
*a =temp;

}