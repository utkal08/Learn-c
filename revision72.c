#include <stdio.h>
int main(){
int arr[10];
int*ptr ;
ptr =arr;
ptr = ptr +2;
if(ptr == &arr[2]){
    printf("these point to  the same location in memory  ");
}
else {
        printf("these  do not point to  the same location in memory  ");

}
return 0;
}