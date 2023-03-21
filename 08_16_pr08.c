#include <stdio.h>
 int  occurence( char st[],char c){
char *ptr = st ;
int count =0;
while (*ptr!= '\0'){
    if (*ptr == c){
        count++;
    }
    ptr++;
}
 return count;
}
 

int main(){
char st[]= "harry ";
 int count = occurence(st,'r');
printf("occurences = %d " ,count );
return 0;
}