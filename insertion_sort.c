#include <stdio.h>
int main(){
int  a [12]={54,25,6,3,67,75,4,12};
int temp ,i,j;
for ( i=1;i<=9;i++){
    temp= a[i];
     j=i-1;
      while (j>=0 && a[j]>temp){
         a[j+1]= a[j];
          j--;
      }
      a[j+1]=temp;
       
}
for ( i = 2; i < 10; i++)
{
    /* code */


printf("%d ",a[i]);
}
return 0;
}