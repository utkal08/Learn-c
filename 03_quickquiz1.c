#include <stdio.h>
int main(){
int math , chemistry, physics ,marks;
printf("Enter your math marks \n");
scanf("%d",&math);
printf("Enter your chemistry marks \n");
scanf("%d",&chemistry);
printf("Enter your physics marks \n");
scanf("%d",&physics);
marks =(math+chemistry+physics)/3 ;

if(marks > 40 && math >33 && physics >33 && chemistry> 33 ){
printf("You are pass \n");
} 
else {
    printf("you are fail");
}
return 0;
}