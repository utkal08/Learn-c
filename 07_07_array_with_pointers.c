#include <stdio.h>
void printArray (int *ptr, int n){
    for (int i =0 ;i<n ;i++){
        printf("The value of element %d  is %d \n ",i+1 , *(ptr +i));
    }
}
int main(){
int arr [] = { 1,3 ,5566,43,64,6544,64, };
printArray(arr, 7);
return 0;
}