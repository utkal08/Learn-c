#include <stdio.h>
#include<string.h>
struct employee {
        int code ; 
        float salary ;
        char name[20] ;
            };
int main(){
struct employee facebook[100];
facebook [0].code = 100;
facebook [0].salary = 100;
 strcpy (facebook[0].name , "harry");
facebook [1].code = 101;
facebook [1].salary = 123;
 strcpy (facebook[1].name , "sheela");
facebook [3].code = 100;
facebook [3].salary = 355; 
 strcpy (facebook[3].name , "rohan");

return 0;
}