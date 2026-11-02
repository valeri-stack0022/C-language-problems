#include <stdio.h>

int main()
{
    unsigned char age;
    printf("Baby age: ");
    scanf("%hhd", &age);
    printf("To 18 years: %d\n", 18 - age);

    return 0;
}
