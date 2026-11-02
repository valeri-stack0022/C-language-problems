#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter your integer number: ");
    scanf("%d", &number);

    if(number < 0)
    {
        printf("Negative\n");
    }
    else if(number > 0)
    {
        printf("Positive\n");
    }
    else if(number == 0)
    {
        printf("Zero\n");
    }

    return 0;
}
