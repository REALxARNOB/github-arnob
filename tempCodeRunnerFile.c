#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int *divisors = (int *)malloc(num * sizeof(int));
    if (divisors == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            divisors[count++] = i;
            sum += i;
        }
    }

    printf("Divisors: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", divisors[i]);
    }
    printf("\n");

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    free(divisors);
    return 0;
}