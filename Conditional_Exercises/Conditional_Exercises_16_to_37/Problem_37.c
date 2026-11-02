#include <stdio.h>

int main()
{
    int  num = 0;
    printf("Input a number(Even and Positive?): ");
    scanf("%d", &num);

    if((num % 2 == 0) && (num > 0))
    {
        printf("Number is even and positive:\n");
    }
    else
    {
        printf("The condition is not met:\n");
    }
    return 0;
}
