#include <stdio.h>
int main(){
int marks ;
printf("Enter your marks to know your grade\n:");
scanf("%d", &marks);
if ( marks >90 && marks<= 100 ){
printf( " congratulation !! Your grade is A\n");
}
 else if ( marks >80 && marks<= 90 ){
printf( " congratulation !! Your grade is B\n");
}
 else if ( marks >70 && marks<= 80 ){
printf( " congratulation !! Your grade is C\n ");
}
else {
    printf("your grade is D");
}
return 0;
}