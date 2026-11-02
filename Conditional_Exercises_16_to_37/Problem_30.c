#include <stdio.h>

int main()
{
    int number = 0;
    printf("Input a integer number: ");
    scanf("%d", &number);

    if(number % 30 == 0)
    {
        printf("This number you can divide 2, 3 and 5\n");
    }
    return 0;
}
