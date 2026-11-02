#include <stdio.h>

int main()
{
    short int Celsius = 0;
    printf("Enter temperature by Celsius: ");
    scanf("%hd", &Celsius);
    short int Fahrenheit = (Celsius * 9/5) + 32;
    printf("By Fahrenheit: %hd\n", Fahrenheit);

    return 0;
}
