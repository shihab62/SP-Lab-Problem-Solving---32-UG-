#include <stdio.h>

int main() {
    int a, n, sum = 0, count = 0;

    printf("Enter the start value (a): ");
    scanf("%d", &a);
    printf("\nEnter the end value (n): ");
    scanf("%d", &n);

    for (int i = a; i <= n; i++) {
        if (i % 2 != 0) {
                    printf("%d ",i);

            sum += i;
            count++;
        }
    }

    float average = (float)sum / count;

    printf("Sum of odd numbers between %d and %d: %d\n\n", a, n, sum);
    printf("Average of odd numbers between %d and %d: %.2f\n\n", a, n, average);
        printf("END\n\n ");


    return 0;
}
