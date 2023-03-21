#include <stdio.h>
#include <string.h>

struct employee {
        int code ; 
        float salary ;
        char name[20] ;
            };
int main()
{
    


struct employee e1[10];
e1[0].code= 133;
e1.salary = 23.444;
strcpy( e1.name , "rahul ");
printf (" %d\n", e1.code );
printf (" %f\n", e1.salary );
printf (" %s\n", e1.name);

return 0;
}