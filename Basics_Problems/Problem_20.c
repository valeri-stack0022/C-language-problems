#include <stdio.h>

int main()
{
    long double number1;
    long double number2;
    printf("Enter first number: ");
    scanf("%Lf", &number1);
    printf("Enter second number: ");
    scanf("%Lf", &number2);
    printf("Summary: %Lf\n", number1 + number2);

    long double number3 = number2 * number1;
    printf("Multiple: %Lf\n", number3);

    return 0;
}
