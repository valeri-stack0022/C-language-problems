#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter your first integer number: ");
    scanf("%d", &a);
    printf("Enter your second integer number: ");
    scanf("%d", &b);
    printf("Enter your third integer number: ");
    scanf("%d", &c);

    if(a <= b)
    {
        if(b <= c)
        {
            printf("%d %d %d\n", a, b, c);
        }
        else if(c <= b)
        {
            printf("%d %d %d\n", a, c, b);
        }
    }
    else if(b <= a)
    {
        if(a <= c)
        {
            printf("%d %d %d\n", b, a, c);
        }
        else if(c <= a)
        {
            printf("%d %d %d\n", b, c, a);
        }
    }
    else if(a <= c)
    {
        if(c <= b)
        {
            printf("%d %d %d\n", a, c, b);
        }
        else if(b <= c)
        {
            printf("%d %d %d\n", a, b, c);
        }
    }
    else if(c <= a)
    {
        if(a <= b)
        {
            printf("%d %d %d\n", c, a, b);
        }
        else if(b <= a)
        {
            printf("%d %d %d\n", c, b, a);
        }
    }
    return 0;
}
