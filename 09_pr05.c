#include <stdio.h>
typedef struct complex {
    int real;
    int complex;

}comp;
int main(){
    comp c1 ;
    comp *ptr;
    ptr = &c1;
    ptr-> real  = 233;
    ptr-> complex  = 45;
    struct complex comp;
    printf ( "The  real of complex is : %d \n ", c1.real );
    printf ( "The  complex  of complex is : %d \n ", c1.complex  );


return 0;
}