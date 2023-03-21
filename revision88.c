#include <stdio.h>
void encrypted(char *st){
    char *ptr =st;
    while (*ptr != '\0'){
        *ptr = *ptr +1;
        ptr++;
    }

}
int main(){
char st []= " siddu mooselwaala ";
encrypted(st);
printf("%s", st);
return 0;
}