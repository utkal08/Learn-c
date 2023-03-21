#include <stdio.h>
int  positiveintger(int *arr,int n){
    int positivecount =0;
for (int i=0 ; i <n ; i++){
    if  (arr[i]>0){
        positivecount++;
    }
}
return positivecount++;

}
int main(){
int arr [10] ={1,3,-4,-5,5,-6,78,-45};
    int result = positiveintger(arr,10);
    printf("the number of positive integers in the arrray is %d\n",result);
return 0;
}