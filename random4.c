// // // // // #include <stdio.h>
// // // // // int main(){
// // // // //     int n;

// // // // // int a[5]={43,67,87,43,56};

// // // // // printf("Enter the number which you want to search ");
// // // // // scanf("%d",&n);
// // // // // for(int x=0;x<5;x++)
// // // // // if(n==a[x]){
// // // // //     printf("the index of the entered number is %d",x);
// // // // // }
// // // // // return 0;
// // // // // }

// // // // #include <stdio.h>
// // // // int main()
// // // // {

// // // //     int a[3][3], b[3][3], c[3][3];
// // // //     int sum = 0;
// // // //     printf("Enter the elements of your first matrix \n \n");
// // // //     for (int i = 0; i < 3; i++)
// // // //     {
// // // //         for (int j = 0; j < 3; j++)
// // // //         {
// // // //             printf("Enter the %d %d element of  your matrix \n", i, j);
// // // //             scanf("%d", &a[3][3]);
// // // //         }
// // // //     }
// // // //     printf("Enter the elements of  your second  matrix \n \n");
// // // //     for (int i = 0; i < 3; i++)
// // // //     {
// // // //         for (int j = 0; j < 3; j++)
// // // //         {
// // // //             scanf("%d", &a[i][j]);
// // // //         }
// // // //     }

// // // //     for (int i = 1; i < 3; i++)
// // // //     {
// // // //         for (int j = 1; j < 3; j++)
// // // //         {

// // // //             for (int k = 0; k < 3; k++)
// // // //             {
// // // //                 sum += a[i][k] * b[k][j];
// // // //             }
// // // //             c[i][j] = sum;
// // // //             sum = 0;
// // // //         }
// // // //     }
// // // //     printf(" the matrix which   you want is here \n \n");
// // // //     for (int i = 0; i < 3; i++)
// // // //     {
// // // //         for (int j = 0; j < 3; j++)
// // // //         {
// // // //             printf("%d \t", c[i][j]);
// // // //         }
// // // //         printf("\n");
// // // //     }

// // // //     return 0;
// // // // }


// // // // #include <stdio.h>
// // // // int main(){
// // // // // programm for printing pattern 
// // // // for(int i=0;i<5;i++){
// // // //     for(int i=0;i<i;i++){
// // // //         printf("*");
// // // //     }
// // // //     printf("\n");cm 
// // // // }
// // // // return 0;
// // // // }

// // // #include <stdio.h>
// // // int main(){
// // // int n ,count=0,sum=0,r,t;
// // //  printf("Enter the digit of which you want the sum of ");
// // //   scanf("%d",&n);
// // // // t=n;

// // // while(t!=0){
// // //     r=t%10;
// // //     sum = sum+r;
// // //     t=t/10;

// // // }
// // // printf("%d",sum);
// // // return 0;
// // // }
// // #include <stdio.h>
// // int main(){
// // int n ,rev=0,r;
// //  printf("Enter the number which you want to reverse  ");
// //  scanf("%d",&n);
// //  while(n!=0){
// //   r=n%10;
// //   rev=rev*10+r;
// //    n/=10;

// //  }
// // printf("reversed number %d",rev);
// // return 0;
// // }
// #include <stdio.h>
// #include <math.h>
// int main(){
// int  n , arm=0,count=0,s,r;
// printf("Enter the number ");
// scanf("%d",&n);
// s=n;

// while(n!=0){
// n=n/10;
// count++;

// }
// while(n!=0){
// r=s%10;
// arm=pow(r,count)+arm;
// n=n/10;

// }
// if (arm==n){
//   printf("Entered number is armstrong ");

// }
// else{
//   ("sorry! this is not a armstrong");
// }
// return 0;
// }
// #include <stdio.h>
// int main(){
// int arr[50];
// int sum=0;
// printf("Enter the elements of the array");
// for (int i = 0; i < 5; i++)
// {
// scanf("%d",arr[i]);
// }
// for (int i = 0; i < 5; i++)
// {
// sum =sum +arr[i];
// }
// printf("the sum of the all elements of the array is %d",sum);
// return 0;
// }
// #include <stdio.h>
// int main(){
// int n,count=0 ;
// printf("Enter the value of n ");
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++){
//  for(int j=2;j<=i%2;j++){
//     count=0;
//     if (i%j==0){
//         count++;
//     }
//     if(count==0  && num!= 1)
//              printf("%d ",num);

//  }}
// return 0;
// }
// #include<stdio.h>

// int main(){

//     int num,i,count,n;
//     printf("Enter max range: ");
//     scanf("%d",&n);

//     for(num = 1;num<=n;num++){

//          count = 0;

//          for(i=2;i<=num/2;i++){
//              if(num%i==0){
//                  count++;
//                  break;
//              }
//         }
        
//          if(count==0 && num!= 1)
//              printf("%d ",num);
//     }
  
//    return 0;
// }
// #include <stdio.h>
// int main(){
// int n,t1=0,t2=1;
//  int t3=t1+t2 ;
//  printf("Enter the value of n");
//  scanf("%d",&n);
//  printf("%d %d ",t1,t2);

//  for(int i =3;i<=n;i++){
//     printf("%d",t3);
//     t1=t2;
//     t2=t3;
//     t3=t1+t2;
//  }

// return 0;
// }
#include <stdio.h>
int main(){
int a,b;
char c;

printf("Enter the value of a and b");
scanf("%d %d ",&a,&b);
printf("Enter the value of c");
scanf("%c",&c);
switch(c){
case'+':
printf(" sum %d",a+b);
break;
case'-':
printf(" sub %d",a-b);
break;
case'*':
printf(" mul %d",a*b);
break;
default:
printf("divide %d",a/b);
}
return 0;
}