#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && a == c && b == c)
    {
        printf("All equal:\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Equal two numbers:\n");
    }
    else if(a != b && b != c && a != c )
    {
        printf("Not equal numbers:\n");
    }

    return 0;
}
