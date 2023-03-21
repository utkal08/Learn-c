#include <stdio.h>
#include <string.h>

 typedef struct bank_details{
    int account_no ;
    char name [30];
    int status;

 }cust;
 void show (struct bank_details cust ){
    printf("The account no of customer 1 is : %d \n", cust.account_no);
    printf("The name of customer 1 is : %s \n",cust.name);
    printf("The status of customer 1 is : %d \n",cust.status);
 }
int main(){
cust c1;
cust *ptr;
ptr = &c1;
ptr-> account_no = 3444434;
strcpy(ptr-> name,  "harry");
ptr-> status = 50000;
show(c1);
return 0;
}