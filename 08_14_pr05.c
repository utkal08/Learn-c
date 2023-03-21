#include <stdio.h>
char *strcpy (char st2[] , char st[]) {

int i = 0;
while (st[i] != '\0'){
    st2[i]=st[i];
    i++; 
    
}
st2[i]= '\0';

return st2 ;

}
int main(){
char st[]="harry ";
char st2[35];
  strcpy(st2, st);
printf("now the st2 is st %s" ,st2);
return 0;
}