#include <stdio.h>
#include <string.h>
struct employee {
    char name [10];
    int salary ;
     int code ;

};

int main(){
   struct  employee e1;
   strcpy( e1.name, "nobita");
   e1.salary = 34444;
   e1.code = 101;
   
   struct  employee e2;
   strcpy ( e2.name, "suzuka");
   e2.salary = 34444;
   e2.code = 102;
   struct  employee e3;
   strcpy ( e3.name, "suneo ");
   e3.salary = 34444;
   e3.code = 103;


return 0;
}