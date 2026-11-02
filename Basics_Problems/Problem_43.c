#include <stdio.h>

int main()
{
    int number1;
    int number2;
    printf("Enter first integer number: ");
    scanf("%d", &number1);
    printf("Enter second integer number: ");
    scanf("%d", &number2);
    int result = number1 - number2;

    printf("Result of subtraction -> %d\n", result);

    return 0;
}
