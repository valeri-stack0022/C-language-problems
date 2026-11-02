#include <stdio.h>

int main()
{
    unsigned char number1;
    printf("Enter two-digit number: ");
    scanf("%hhd", &number1);
    printf("Digit summary: %d\n", (number1 / 10) + (number1 % 10));

    return 0;

}
