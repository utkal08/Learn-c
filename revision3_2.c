#include <stdio.h>
int main(){
int year;
printf( " ***** Leap year teller *****\n");
printf( "Enter the year\n ");
scanf( "%d", &year);
if (year % 4  ==0|| year %100==0 || year %400==0){
printf("The year entered by you is leap year \n");
}
else {
    printf(" This year is not a leap year ");
}


return 0;
}