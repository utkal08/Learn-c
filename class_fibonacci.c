#include <stdio.h>

int main()
{
  int n, a = 0, b = 1, i = 1, c;
  printf("Enter any number ");
  scanf("%d", n);
  printf(" %d %d", a, b);
  while (i <= n)
  {
    c = a + b;
    printf(" %d", c);
    a = b;
    b = c;
    i++;
  }
  return 0;
}