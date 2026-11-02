#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter a integer number: ");
    scanf("%d", &number);
    
    if(number > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("Not Positive\n");
    }

    return 0;
}
