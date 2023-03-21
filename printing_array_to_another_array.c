#include <stdio.h>
int main(){
int a[10]= {1,35,6,7,5,75};
int b[10];
for (int i =0; i<5;i++){
    b[i]=a[i];
    printf("%d  %d",a[i],b[i] );
    
}
return 0;
}