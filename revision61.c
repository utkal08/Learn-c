#include <stdio.h>
int main(){
int x = 4;
int * ptr;
ptr = &x;
// printf("%u" ,ptr);
printf("%d",*ptr);
return 0;
}