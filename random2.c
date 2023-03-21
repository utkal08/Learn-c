#include <stdio.h>
int main(){
    
char  name[50] ;
puts("Enter the name ");
 gets( name);
for (int n=0; name[n]!='\0';n++){
    
    printf("%c",name[n]);
    printf("\n");
 }


return 0;
}