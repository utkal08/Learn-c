#include <stdio.h>

int main(){
char n_name = 4;
int n_class = 4;

int profile[4][4];
for(int i = 0; i< n_name;i++ )
{

for(int j = 0; j< n_class;j++ )
{
printf("Enter the name of the student %c which is in class %d \n" ,i+1,j+1) ;
scanf("%d",&profile[i][j]);}
}


for(int i = 0; i< n_name;i++ ){
    for(int j = 0; j< n_name;j++ ){
printf(" The  profile of user whose  is name  %c in class   %d \n",i+1 ,j+1) ;


    }
}
return 0;
}
