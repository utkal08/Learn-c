#include <stdio.h>
#include <string.h>
int main(){
char st[34] ="shinchen";
char *st1  = "hello";
strcat (st , st1);

printf("Now the st   is %s ", st);

return 0;
}