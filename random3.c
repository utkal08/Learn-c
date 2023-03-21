// // #include <stdio.h>
// // int main(){
// // int n ;
// //  int fact = 1;
// //   printf("Enter the value of n ");
// //    scanf("%d",&n);
// // for (int i = 1
// // ; i <= n; i++)
// // {
// // fact =fact*i;
// // }
// // printf("%d",fact);
// // return 0;
// // }\
 
// #include <stdio.h>
// int main(){
// int n ,fib =0;
//  printf("Enter the value of n ");
//   scanf("%d",n);
//    if (n==0||n==1){
//      return 1;
      
//    }
//    else{
//     for (int i =0;i<=n;i++){
//      fib =(i-1)+(i-2);

//    }}

//    printf("%d" ,fib);
// return 0;
// }
#include <stdio.h>
int main(){
int n = 32,sum = 0;
 int r ,t;
 t=n;
 while (t!=0){
  r = t%10;
  sum = sum +r;
  t= t/10;
 }
    printf("%d",sum);

return 0;
}  
