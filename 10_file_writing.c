#include <stdio.h>
int main(){
FILE *fptr;
int number = 234;

fptr = fopen("generated.txt","w");
fprintf(fptr , "The number is %d \n", number);
fprintf (fptr, "Thanks for using fprintf \n",number);
fclose (fptr);
return 0;
}