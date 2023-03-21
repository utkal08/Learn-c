#include <stdio.h>
int main(){
 int  a [12]={54,25,6,3,67,75,4,12};
int temp,j;
 for (int i =0;i<=8;i++){
     int min = i;
      for ( j = i+1; j<=9;j++){
        if (a[j]< a[min]){
            min = j;

        }
        }
        if (min!=i){
             temp=a[min]; //2 
             a[min]= a[i];// 3
             a[i]= temp;// 

        }


      }
 
 for ( j =1;j<9 ;j++){
printf(" %d",a[j]);
 }
return 0;
}