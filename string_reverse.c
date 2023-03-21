#include <stdio.h>
int main(){
char name[50];
int c=0,i;

 puts("enter the string which you want to reverse");
 gets(name);
  for( int i =0; i!='\0';i++){
    c++;
     
  }
  for(int j= c-1; j>=0;j--){
    printf("%c",name[j]);

  }
return 0;
}