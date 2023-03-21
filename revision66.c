#include <stdio.h>
int main(){
int i = 55;
 int *j;
 j = &i;
 int **k;
 k = &j;
 printf("%d", **k);
return 0;
}