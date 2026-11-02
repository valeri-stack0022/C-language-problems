#include <stdio.h>

int main()
{
    float number1;
    float number2;
    printf("Enter first floating point number: ");
    scanf("%f", &number1);
    printf("Enter second floating point number: ");
    scanf("%f", &number2);
    printf("Divide: %f\n", number1 / number2);

    return 0;
}
