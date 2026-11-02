#include <stdio.h>

int main()
{
    short int year = 0;
    printf("Input a year: ");
    scanf("%hd", &year);

    if((year % 4 == 0) || (year % 400 == 0))
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Normal year\n");
    }

    return 0;
}

