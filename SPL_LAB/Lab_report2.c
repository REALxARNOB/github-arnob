#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mall = (int *)malloc(sizeof(int) * 10);
    if (mall == NULL)
    {
        printf("Allocation failed.");
        return 0;
    }
    free(mall);
    printf("Enter 5 numbers = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&mall[i]);
    }

    int *call = (int *)calloc(sizeof(int),5);
    if (call == NULL)
    {
        printf("Allocation failed.");
        return 0;
    }
    printf("Enter 4 numbers = ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&call[i]);
    }

    int *mul = (int *)realloc(mul, 5 * sizeof(int));
    if (mul == NULL)
    {
        printf("Allocation failed.");
        return 0;
    }
    for (int i = 0; i < 5; i++)
    {
        mul[i] = mall[i] * call[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Multiplication = %d\n",mul[i]);
    }
    free(mul);

    return 0;
}