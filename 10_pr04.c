#include <stdio.h>

int main(){
char name  ;
int salary  ;
printf ("Enter the name  of user : ");
fscanf("%c", &name );
printf ("Enter the salary   of user : ");
fscanf("%d", &salary );
FILE *fptr;
fptr = fopen ("c.txt", "w");
fprintf(fptr, "The name is %c\n",name);
fprintf(fptr, "The salary is %d\n",salary);
fclose(fptr );
return 0;
}