#include <stdio.h>
int main(){
    int i ,j,k,num =1;
for ( i = 1; i <= 6; i++){
    for ( j= 1; j <= i; j++)
    {
        printf("%d " ,num);
            num++;
    }
    printf("\n");


}


return 0;
}