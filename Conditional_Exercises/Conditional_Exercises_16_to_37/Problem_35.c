#include <stdio.h>

int main()
{
    short year = 0;
    printf("Input a year: ");
    scanf("%hd", &year);

    if(year % 10 == 0)
    {
        printf("round year:\n");
    }
    return 0;
}
