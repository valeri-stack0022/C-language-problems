#include <stdio.h>

int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    printf("Result: %lf%%\n", (number * 5) / 100);

    return 0;
}
