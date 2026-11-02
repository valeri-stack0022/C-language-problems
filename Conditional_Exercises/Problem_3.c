#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    printf("Enter first integer number: ");
    scanf("%d", &number1);
    printf("Enter second integer number: ");
    scanf("%d", &number2);
    printf("Enter third integer number: ");
    scanf("%d", &number3);

    if(number1 < number2 && number1 < number3)
    {
        printf("Smallest: %d\n", number1);
    }
    else if(number2 < number1 && number2 < number3)
    {
        printf("Smallest: %d\n", number2);
    }
    else if(number3 < number2 && number3 < number1)
    {
        printf("Smallest: %d\n", number3);
    }

    return 0;

}
