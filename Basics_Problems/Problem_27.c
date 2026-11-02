#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);
    printf("Middle: %f\n", (a + b + c)/3);

    return 0;
}
