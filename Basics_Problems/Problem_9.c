#include <stdio.h>

int main()
{
    unsigned char age = 0;
    printf("Enter your Age by years: ");
    scanf("%hhd", &age);
    printf("Days: %d\n", age * 365);

    return 0;
}
