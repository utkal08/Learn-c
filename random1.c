// // // #include <stdio.h>
// // // int main(){
// // //  int a,b;
// // //   printf("Enter any two number ");
// // //    scanf("%d %d",&a,&b);
// // //    while (a<=b){
// // // for(int i=1; i<=10;i++){
// // //      printf("%d \n",a*i);
    
// // // }

// // // a++;
// // //    }
    
// // // return 0;
// // // }
#include <stdio.h>
int main(){
char a[10];
int b[10];

 for(int i=1;i<=5;i++){
     printf("Enter the name of student  %d ",i);
     scanf("%s",&a[i]);
     for (int j =1;j<=3;j++){
        printf("Enter the marks of subject %d",j);
        scanf("%d",&b[j]);
        

     }

 }
 for(int i=1;i<=5;i++){
     printf(" name of the student  %d  %c",i,a[i]);
     for (int j =1;j<=3;j++){
        printf(" the marks of subject %d ",j);
        


     }

 }
return 0;
}
// #include <stdio.h>
// int main(){
//  int n[10],c1=0,c2=0,sum1=0,sum2=0,avg1 ,avg2;
//   printf("Enter seven number ");
//    for(int i=1;i<=7;i++){
//      scanf("%d",n[i]);
//    }
// if (n>100){
//      c1++;
//      sum1 = sum1+n[i]; 
//      printf("The sum of the number which is more than 100  %d",sum1);
//      avg1 = sum1/n[i];
//      printf("The avg of the number above the 100 %d",avg1);
     
// }
// if (n <100){
//      c2++;
//      sum2 = sum2+n[i]; 
//      printf("The sum of the number which is more than 100  %d",sum2);
//      avg2= sum2/n[i];
//      printf("The avg of the number above the 100 %d",avg2);

// }

// return 0;
// }