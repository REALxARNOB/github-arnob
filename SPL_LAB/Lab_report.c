#include <stdio.h>

int main()
{
    int n, count, countmax = 0, countmode = 0, exists;
    double modelist[100], sum = 0, mean, mode, median, variance = 0,temp;
    scanf("%d",&n);
    double array[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%lf",&array[i]);
        sum += array[i];
    }
    mean = sum / n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count > countmax)
        {
            countmax = count;
            countmode = 0;
            modelist[countmode++] = array[i];
        }
        else if (count == countmax)
        {
            exists = 0;
            for (int j = 0; j < countmode; j++)
            {
                if (modelist[j] == array[i])
                {
                    exists = 1;
                    break;
                }
            }
            if (!exists)
            {
                modelist[countmode++] = array[i];
            }
        }
    }

    if (n % 2 == 0)
    {
        median = ((array[n / 2]) + (array[(n / 2) - 1])) / 2;
    }
    else
    {
        median = array[n / 2 + 1];
    }

    for (int i = 0; i < n; i++)
    {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    variance /= (n - 1);

    printf("Mean = %lf\n",mean);
    if (countmax == 1)
    {
        printf("Mode = No mode");
    }
    else
    {
        printf("Mode = ");
        for (int i = 0; i < countmode; i++)
        {
            printf("%lf,", modelist[i]);
        }
        printf("\n");
    }
    printf("Median = %lf\n",median);
    printf("Variance = %lf\n",variance);

    return 0;
}
