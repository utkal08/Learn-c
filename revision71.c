#include <stdio.h>
int main(){
    int marks [5];
    printf("Enter the marks of student 1: \n");
    scanf("%d",&marks[0]);
    printf("Ent&er the marks of student 2: \n");
    scanf("%d",&marks[1]);
    printf("Ent&er the marks of student 3: \n");
    scanf("%d",&marks[2]);
    printf("Ent&er the marks of student 4: \n");
    scanf("%d",&marks[3]);
    printf("Ent&er the marks of student 5: \n");
    scanf("%d",&marks[4]);
    printf("Enter the marks of student 6: \n");
    scanf("%d",&marks[5]);
    printf("here is the marks of the all students \n");
    printf("%d %d %d %d  %d and %d\n", marks[0],marks[1], marks[2],marks[3],marks[4],marks[5]);

return 0;
}