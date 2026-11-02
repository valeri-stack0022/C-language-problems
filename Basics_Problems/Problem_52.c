#include <stdio.h>

int main()
{
    unsigned char number;
    printf("Enter two-digits number: ");
    scanf("%hhd", &number);

    printf("%hhd%hhd\n", (number % 10),(number / 10));

    return 0;
}
