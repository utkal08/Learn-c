#include <stdio.h>
int main(){
int arr[2][4][5];
for(int i= 0;i<2;i++){
for(int j= 0;j<4;j++){
for(int k= 0;k<5;k++){
    printf("The address of arr [%d][%d][%d]is %u \n",i,j,k,&arr[i][j][k]);
}
}
}
return 0;
}