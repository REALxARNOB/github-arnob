#include <stdio.h>
#include <stdlib.h>

int mdiviso
    int num, sum = 0, count = 0;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Allocate memory to store potential divisors (at most num/2)
    int *divisors = (int *)malloc(num * sizeof(int));
    if (divisors == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Find and store divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            divisors[count++] = i;
            sum += i;
        }
    }

    // Display divisors
    printf("Divisors: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", divisors[i]);
    }
    printf("\n");

    // Check if number is perfect
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect numbr\ )b\numb

    // Free memory
    free(divisors);
divisor
di



















 ub

 ub










































 
 
  

