#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Input three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int M1 = a + b;
    int M2 = a + c;
    int M3 = b + c;

    if(M1 > c && M2 > b && M3 > a)
    {
        if(a == b && b == c && a == c)
        {   
            printf("equilateral triangle։\n");
        }
        else if(a == b || a == c || b == c)
        {
            printf("Isosceles triangle\n");
        }
        else
        {
            printf("Just a triangle\n");
        }
    }
    else if(M1 < c || M2 < b || M3 < a)
    {
        printf("It's not a triangle\n");
    }

    return 0;
}
