#include <stdio.h> 
struct vector {
    int x;
    int y;
};
struct vector sumvector ( struct vector v1 , struct vector  v2){
    struct vector result ;
    result .x = v1.x + v2.x;
    result .y= v1.y + v2.y;
return result ;
}

int main(){
    struct vector v1,v2,sum;

 v1.x = 45;
 v1.y = 433;
 v2.x = 443;
 v2.y = 433;
 sum  = sumvector( v1,v2);
 printf("x dim of result is %d and y dim is %d \n ", sum .x , sum.y);

return 0;
}