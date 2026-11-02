#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("Enter two ineteger numbers: ");
    scanf("%d %d", &a, &b);
    
    if(a == b)
    {
        printf("Equal:\n");
    }
    else
    {
        if(a > b)
        {
            printf("Biggest: %d\n", a);
        }
        else if(b > a)
        {
            printf("Biggest: %d\n", b);
        }
    }

    return 0;
}
