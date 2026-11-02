#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter a integer number: ");
    scanf("%d", &a);

    if(a % 4 == 0 && a % 6 == 0 )
    {
        printf("Divide 4 and 6\n");
    }
    else if(a % 4 == 0 || a % 6 == 0)
    {
        printf("Divide only 4 or 6\n");
    }
    else if(a % 4 != 0 && a % 6 != 0)
    {
        printf("Not divide 4 and 6\n");
    }

    return 0;
}
