#include <stdio.h>

int main()
{
    int number = 0;
    printf("Input a integer number: ");
    scanf("%d", &number);

    if((number % 2 == 0) && (number % 10 == 0))
    {
        printf("Divide by 10\n");
    }
    return 0;

}
