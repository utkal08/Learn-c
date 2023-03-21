#include <stdio.h>
#include <string.h>
struct employee {
        int code ; 
        float salary ;
        char name[20] ;
            };
int main(){
struct employee e1,e2,e3;
printf("Enter the value of code e1\n");
    scanf("%f", &e1.code);

    printf("Enter the value of salary e1\n");
    scanf("%f",& e1.salary);
    printf("Enter the value of name e1\n");
    scanf("%s", &e1.name);
printf("Enter the value code of  e2\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary e2\n");
    scanf("%f",&e2.salary);
    printf("Enter the value of name e2\n");
    scanf("%s", &e2.name);
printf("Enter the value code of  e3\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary e3\n");
    scanf("%f", &e3.salary);
    printf("Enter the value of name e3\n");
    scanf("%s", &e3.name);
//  printf("Here the detail of employee e1 \n") ; 
// printf (" %d\n", e1.code );
// printf (" %f\n", e1.salary );
// printf (" %s\n", e1.name);
// printf("Here the detail of employee e2 \n") ; 
// printf (" %d\n", e2.code );
// printf (" %f\n", e2.salary );
// printf (" %s\n", e2.name);
// printf("Here the detail of employee e3 \n") ; 
// printf (" %d\n", e3.code );
// printf (" %f\n", e3.salary );
// printf (" %s\n", e3.name);

return 0;
}