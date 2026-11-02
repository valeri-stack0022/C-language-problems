#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if((a < b && b < c) || (a < c && c < b))
    {
        printf("%d %d\n", b, c);
    }
    else if((b < a && a < c) || (b < c && c < a))
    {
        printf("%d %d\n", a, c);
    }
    else if((c < a && a < b) || (c < b && b < a))
    {
        printf("%d %d\n", a, b);
    }

    return 0;
}
