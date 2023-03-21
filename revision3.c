#include <stdio.h>
int main(){
int chemistry , math, physics ;
printf("Enter your  chemistry marks : \n");
    scanf("%d", &chemistry);

printf("Enter your  math marks : \n");
    scanf("%d", &math);

printf("Enter your  physics  marks : \n");
    scanf("%d", &physics );
   int  result = (physics+ chemistry + math  )/3;
if ((result)> 40 && physics>33 && chemistry>33 && math>33){
    printf(" you are pass !! ");

}
else {
    printf( "   !!Sorry that You are fail  and you can't go to next class !!");
}

return 0;
}