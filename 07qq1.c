#include <stdio.h>
int main(){
int i = 34;
int*ptr = &i;
char a= 34;
char*ptr1 =&a;
printf("The value of ptr is %u",ptr);
ptr++;
ptr++;
ptr = ptr +1;
ptr = ptr -1;
// ptr =ptr - ptr1;
// ptr =ptr - ptr1;
printf("The value of ptr is %d", *ptr == *ptr1 );
return 0;
}