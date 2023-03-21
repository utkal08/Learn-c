#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter  4 numbers \n");
scanf("%d" ,&a);
scanf("%d" ,&b);
scanf("%d" ,&c);
scanf("%d" ,&d);

if (a> b && a>c && a>d){
    printf("%d is greatest among the all\n",a);
}
 else if (b> a&& b>c && b>d){
    printf("%d is greatest among the all\n",b);
}
else if ( c>a && c>b && c>d){
    printf("%d is greatest among the all\n",c);
}
else {
    printf("%d is greatest among the all\n",d);
    
}
return 0;
}