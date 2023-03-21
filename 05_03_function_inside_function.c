#include <stdio.h>
void Goodmorning();
void Goodafternoon();
void Goodnight();
int main()
{
    Goodmorning();

   

    return 0;
}
void Goodmorning()
{
    printf("Good morning utkal \n");
    Goodafternoon();
}
void Goodafternoon()
{
    printf("Good afternoon utkal \n");
    Goodnight();
}
void Goodnight()
{
    printf("Good night utkal \n");
}