#include <stdio.h>
int main(){
int i = 34;
int*ptr = &i;
printf("The value of ptr is %u",ptr);
ptr++;
ptr++;
ptr = ptr +1;
printf("The value of ptr is %u",ptr);
return 0;
}