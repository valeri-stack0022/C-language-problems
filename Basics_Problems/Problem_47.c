#include <stdio.h>

int main()
{
    long double number1;
    long double number2;
    printf("Enter first number: ");
    scanf("%Lf", &number1);
    printf("Enter second number: ");
    scanf("%Lf", &number2);
    printf("MIddle: %Lf\n", (number1 + number2)/2 );

    return 0;
}
