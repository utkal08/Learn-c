#include <stdio.h>
int main(){
int a[5],b,c;
printf("Enter 5 elements");
for(int i=0; i<6; i++){
    scanf("%d",&a[i]);

}
b =a[0] ;
for(int i=0; i<6; i++){
    
if(a[i]>b){
    b =a[i];
}}
printf("Maximum value is %d",b);
c=a[0];
for(int i=0; i<6; i++){
    
if(a[i]<c){
    c=a[i];
}
}
printf(" \n Minimum value is %d",c);


return 0;
}