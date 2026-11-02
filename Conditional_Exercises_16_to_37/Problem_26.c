#include <stdio.h>

int main()
{
    unsigned char point;
    printf("Input student point: ");
    scanf("%hhd", &point);

    if(point >= 0 && point <= 20)
    {
        printf("Your grade: F\n");
    }
    else if(point > 20 && point <= 40)
    {
        printf("Your grade: D\n");
    }
    else if(point > 40 && point <= 60)
    {
        printf("Your grade: C\n");
    }
    else if(point > 60 && point <= 80)
    {
        printf("Your grade: B\n");
    }
    else if(point > 80 && point <= 100)
    {
        printf("Your grade: A\n");
    }
    return 0;
}
