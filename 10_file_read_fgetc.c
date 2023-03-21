#include <stdio.h>
int main(){
FILE *ptr;
char c;
ptr = fopen ("getcdemo.txt", "r");
while(c!=EOF){  
    printf ("%c",c);
    c =fgetc(ptr);
}
return 0;
}