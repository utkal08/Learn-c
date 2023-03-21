#include <stdio.h>
int main(){
FILE *ptr;
int num;
int num2;
ptr = fopen ("harry3.txt", "r");
if (ptr == NULL){
    printf("This file does not exist \n");
}
else{
fscanf(ptr , " %d", &num);
fscanf(ptr , " %d", &num2);
printf("The value of num is %d \n", num);
printf("The value of num2 is %d ", num2);
fclose(ptr);
}
return 0;
}