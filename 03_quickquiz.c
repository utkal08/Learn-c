#include <stdio.h>
int main(){
    
int marks;
printf("Enter your marks  \n");
scanf("%d",&marks);
if (100<=marks || marks > 90){
    printf("Your grade is A \n");
}
else if (90<=marks || marks > 80){
    printf("Your grade is B \n");
}
else if (80<=marks || marks > 70){
    printf("Your grade is c \n");
}
 else if (70<=marks || marks > 60){
    printf("Your grade is D \n");
 }
else {
    printf("Your grade is E");

}
return 0;
}