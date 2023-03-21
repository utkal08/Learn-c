#include <stdio.h>
void printpattern(int n);
int main(){
int a ;
printf (" Enter the value of a \n ");
scanf("%d",&a);
printpattern(a);
return 0;
}
void printpattern(int n){ 
    if (n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(int i =0 ; i<(2*n-1);i++){
        printf("*\n");
    }

}