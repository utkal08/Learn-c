#include <stdio.h>
int strlen(char *str ){
    char *ptr = str ; 
     int count=0;
    while (*ptr != '\0'){
        count++;
        ptr++;
    }
return count ;
}
int main(){
char str[]= " ninja hatodi ";
  int l = strlen(str);
  printf(" the length of this string is %d ",l);

return 0;
}