#include <stdio.h>

int main()
{
    int A, B, sum;
    printf("Enter Temperature of First Sensor: ");
    scanf("%d", &A);

    printf("Enter Temperature of Second Sensor: ");
    scanf("%d", &B);

    sum = A + B;

    printf("Sum of entered temperatures is: %d\n", sum);

    return 0;
}