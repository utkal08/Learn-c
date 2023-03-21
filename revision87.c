#include <stdio.h>
char *strcpy (char  st2[], char  st1[]){
    int i =0;
     while ( st1[i] != '\0'){
st2[i]= st1[i];
i++;
     }
     st2[i]='\0';
     return st2 ;
    
}
int main(){
char st1[]="pogo ";
char st2 [34];
 strcpy ( st2, st1);
printf( " after applying strcpy st2 is also equal to st1 %s\n", st2);
return 0;
}