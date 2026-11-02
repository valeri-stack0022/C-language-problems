#include <stdio.h>

int main()
{
    int number1;
    int number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    printf("Middle: %d\n", (number1 + number2)/2);

    return 0;
}
