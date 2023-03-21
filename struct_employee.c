#include <stdio.h>
#include <string.h>

struct employee {
        int code ; 
        float salary ;
        char name[20] ;
            };
int main()
{
    


struct employee e[3];
for (int  i = 1; i <=3; i++)
{
    printf("Enter the details of employee %d",i+1);
    printf("\n");
    printf("enter the code ");
    scanf( "%d",&e[i].code);
    printf("enter the salary");
    scanf("%f",&e[i].salary);
    printf("enter the name ");
    scanf("%s",e[i].name);
}
for (int  i = 0; i <=3; i++)
{
    printf(" the details of employee %d \n",i);
    printf("\n");
    printf(" the  code of the employee %d is %d \n ",i,e[i].code);
    printf(" salary %f \n",e[i].salary );
    printf(" the name %s \n",e[i].name);
}

return 0;
}