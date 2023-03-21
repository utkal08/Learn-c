#include <stdio.h>
int positive_integer(int *arr, int n)
{
    int positivecount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positivecount++;
        }
    }
    return positivecount;
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 5, -4, -3, -5, -8, 9};
    int result = positive_integer(arr, 10);

    printf("the  number of positve integers in the array is  %d\n", result);

    return 0;
}