#include <stdio.h>

int main()
{
    long long int number1;
    long long int number2;
    printf("Enter first integer number: ");
    scanf("%lld", &number1);
    printf("Enter second integer number: ");
    scanf("%lld", &number2);
    printf("Result: %lld\n", number1 * number2 * number2);

    return 0;
}
