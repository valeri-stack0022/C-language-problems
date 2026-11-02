#include <stdio.h>

int main()
{
    double number1;
    double number2;
    double number3;
    long double result;
    printf("Enter your first number: ");
    scanf("%lf", &number1);
    printf("Enter your second number: ");
    scanf("%lf", &number2);
    printf("Enter your third number: ");
    scanf("%lf", &number3);

    result = number1 * number2 * number3;
    printf("Multiple Result: %Lf\n", result);

    return 0;

}
