#include <stdio.h>
void func(int *a){
    int y;
    y = 10*(*a);
    *a =y;
    
}
int main(){
int x= 10;
func(&x);
printf("%d ",x);
return 0;
}