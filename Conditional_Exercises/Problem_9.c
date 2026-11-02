#include <stdio.h>

int main()
{
    long double a = 0;
    long double b = 0;
    char operator;
    printf("Enter -> number - arithmethic operator - number: ");
    scanf("%Lf %c %Lf", &a, &operator, &b);
    
    if(operator == '+')
    {
        printf("Result: %Lf\n", a + b);
    }
    else if(operator == '-')
    {
        printf("Result: %Lf\n", a - b);
    }
    else if(operator == '*')
    {
        printf("Result: %Lf\n", a * b);
    }
    else if(operator == '/')
    {
        if(b != 0)
        {
            printf("Result: %Lf\n", a / b);
        }

        if(b == 0)
        {
            printf("Can't divide by 0!\n");
        }
    }

    return 0;
}
