#include <stdio.h>
int sum (int i);
int main(){

return 0;
}
 int sum (int ){
    int i;
    for  (i =0,i<=10,i++){
        printf ("The sum of first ten natural no is %d \n",i);
        return sum(i-1) +i;
    }
}