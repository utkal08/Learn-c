#include <stdio.h>
int main(){
FILE* ptr;
int num;
printf("Enter the integer of which you want table of \n");
scanf("%d",&num);
ptr = fopen ("table.txt","w");
for (int i= 0;i<10;i++){
fprintf(ptr, "%d X %d =%d\n", num,i+1,num*(i+1)); 
}
fclose(ptr);
return 0;
}