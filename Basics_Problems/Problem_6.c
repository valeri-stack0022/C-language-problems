#include <stdio.h>

int main()
{
    float height = 0;
    printf("Enter your height by meters: ");
    scanf("%f", &height);

    float weight = 0;
    printf("Enter your weight by kilograms: ");
    scanf("%f", &weight);

    printf("BMI: %f\n", weight/(height * height));

    return 0;
}
