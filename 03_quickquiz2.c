#include <stdio.h>
int main(){
int income;
printf("Enter your income \n");
scanf("%d",&income);
if (income>250000 ||income < 500000){
    int tax = 0  ;
    tax = tax + 0.05 * (income -250000);
    
}

 if (income>500000 ||income < 1000000){
    int tax ;
tax = tax + 0.20 * (income-500000);
    
}
 if (income>1000000){
    int tax ;
    tax = tax + 0.30 * (income-1000000);
    
}

    printf("your overall tax on your income is %f\n" ,tax);

return 0;
}