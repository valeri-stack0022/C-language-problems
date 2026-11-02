#include <stdio.h>

int main()
{
    short int a = 0;
    short int b = 0;
    printf("Enter first integer number: ");
    scanf("%hd", &a);
    printf("Enter second integer number: ");
    scanf("%hd", &b);

    if(a > b)
    {
        printf("Subtarction: %hd\n", a - b);
    }
    else
    {
        printf("Fist number is equal or less for second number\n");
    }

    return 0;

}
