#include <stdio.h>

int main()
{
    int a = 0;
    printf("Input a integer number(for divide 2 or 3 or 7): ");
    scanf("%d", &a);

    if((a % 2 == 0) || (a % 3 == 7) || (a % 7 == 0))
    {
        printf("Can divide:\n");
    }
    else 
    {
        printf("Can't divide:\n");
    }

    return 0;
}
