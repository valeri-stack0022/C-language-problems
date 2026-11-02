#include <stdio.h>

int main()
{
    long double a;
    long double b;
    long double c;
    printf("Enter first number: ");
    scanf("%Lf", &a);
    printf("Enter first number: ");
    scanf("%Lf", &b);
    printf("Enter first number: ");
    scanf("%Lf", &c);
    printf("Summary: %Lf\n", a + b + c);

    return 0;

}
