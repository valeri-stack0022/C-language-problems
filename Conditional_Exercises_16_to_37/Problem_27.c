#include <stdio.h>

int main()
{
    unsigned char point;
    printf("Input your point(0-100): ");
    scanf("%hhd", &point);

    if(point >= 60 && point <= 100)
    {
        printf("Success");
    }
    else if(point >= 0 && point < 60)
    {
        printf("Fail");
    }

    return 0;
}
