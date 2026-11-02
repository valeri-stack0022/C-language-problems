#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;
    printf("Enter your first integer number: ");
    scanf("%d", &number1);
    printf("Enter your second integer number: ");
    scanf("%d", &number2);

    if(number1 > number2)
    {
        printf("Great value: %d\n", number1);
    }
    else if(number2 > number1)
    {
        printf("Great value: %d\n", number2);
    }
    return 0;
}
