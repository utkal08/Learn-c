#include <stdio.h>
int main(){
int a [5],b[5],c[5] ;
printf("enter  five numbers");
for (int i = 0; i < 6; i++)
{
scanf("\n %d",&a[i]);
}
printf("enter  five numbers");

for (int i = 0; i < 6; i++)
{
scanf("%d",&b [i]);
}
for (int i = 0; i < 6; i++)
{
c[i]=a[i]+b[i];  
printf("%d\t",c[i]);
}


return 0;
}
