#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter the four numbers\n ");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);
if ( a  > b && a>c && a>d){
    printf( "%d is greatest among  the all", a);
    
}
 else if ( b  > a&& b>c && b>d){
    printf( "%d is greatest among  the all", b);

}
 else if ( c  > a&& c>b && c>d){
    printf( "%d is greatest among  the all", c);

}
else {
    printf( " %d is greatest among the all ",d);
}
return 0;
}