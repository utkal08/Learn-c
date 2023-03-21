#include <stdio.h>
 void  matrix_multiplication(){
    int a[50][50];
    int b[50][50];
    int c[50][50];
    int n,m,sum;
    printf("Enter the number and rows ");
    scanf(" %d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the element of matrix 1 ");
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the element of matrix 2");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
                sum= 0;
            for(int k=0;k<m;k++){
                sum = sum +a[i][k]*b[k][j];
                c[i][j]=sum;

            }
            for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                       printf("%d",c[i][j]);


        }
    
    }
      printf("\n")  ;    

        }
    
    }

 
 }
int main(){
matrix_multiplication();

return 0;
}