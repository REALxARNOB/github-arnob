#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, sum1 = 0;
    int *sum = (int *)malloc(10 * sizeof(int));

    printf("Enter number = ");
    scanf("%d",&n);
    if (sum == NULL)
    {
        printf("Allocation failed");
        return 0;
    }


    for (i = 0; i <= (n / 2); i++)
    {
        if(i != 0)
        {
            if (n % i == 0)
            {
                sum[i] = i;
                sum1 += sum[i];
            }
        }
    }
    if (sum1 == n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }
    free(sum);
    return 0;
}