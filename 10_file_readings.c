#include <stdio.h>
int main(){
FILE *ptr;
int num;
int num2;
ptr = fopen ("harry.txt", "r");
fscanf(ptr , " %d", &num);
fscanf(ptr , " %d", &num2);
printf("The value of num is %d \n", num);
printf("The value of num2 is %d ", num2);
fclose(ptr);
return 0;
}