#include <stdio.h>
int check (char st[], char c){
char *ptr = st;
 
 while (*ptr != '\0'){
    if(*ptr == c){
        return 1;
    }
    
    ptr++;
 }

}
 
int main(){
char st[]= " yo yo honey singh";
 int l = check(st , 'z');
 printf( "%d ", l);
return 0;
}