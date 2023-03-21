#include <stdio.h> 
void  sum ( void ){
    int a,b;
    printf("enter value of a ");
    scanf(" %d", &a);
    
    printf("enter value of b ");
    scanf(" %d", &b);

     int c;
     c  = a+b;
printf("%d",c);
}
int main(){
    sum ();
 return 0;
}