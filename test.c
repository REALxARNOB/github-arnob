#include <stdio.h>

int main()
{
    int arr[100], n, L = -1, SL = -1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > L)
        {
            L = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > SL && arr[i] < L)
        {
            SL = arr[i];
        }
    }
    printf("%d",SL);
    return 0;
}
