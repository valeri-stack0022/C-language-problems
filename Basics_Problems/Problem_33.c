#include <stdio.h>

int main()
{
    unsigned char age1;
    unsigned char age2;
    unsigned char age3;
    printf("Enter first friend's age: ");
    scanf("%hhd", &age1);
    printf("Enter second friend's age: ");
    scanf("%hhd", &age2);
    printf("Enter third friend's age: ");
    scanf("%hhd", &age3);

    printf("Total age: %hd\n", age1 + age2 + age3);

    return 0;
}
