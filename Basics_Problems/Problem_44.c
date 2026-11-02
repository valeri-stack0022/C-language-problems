#include <stdio.h>

int main()
{
    long double number1;
    long double number2;
    long double number3;
    long double result;
    printf("Enter first number: ");
    scanf("%Lf", &number1);
    printf("Enter second number: ");
    scanf("%Lf", &number2);
    printf("Enter third number: ");
    scanf("%Lf", &number3);

    result = number1 + number2 + number3;
    printf("Result of addition -> %Lf\n", result);

    return 0;
}
