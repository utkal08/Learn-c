#include <stdio.h>
int main()
{
    int arr[] = {15, 33, 35, 75, 2, 42, 4, 74};
    int x;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i] < arr[j])
            {
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
    printf("sorted array \n");
    for (int i = 0; i < 8  ; i++)
    {
        printf(" %d ",arr[i]);  
  }
    

    return 0;
}