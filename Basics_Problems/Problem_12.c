#include <stdio.h>

int main()
{
    int number1;
    int number2;
    printf("Enter your first number: ");
    scanf("%d", &number1);
    printf("Enter your second number: ");
    scanf("%d", &number2);
    printf("Adder -> %d\n", number1 + number2);
    printf("Subtractor -> %d\n", number1 - number2);
    printf("Multiple -> %d\n", number1 * number2);
    printf("Division -> %d\n", number1 / number2);

    return 0;
}
