#include <stdio.h>

int main()
{
    double a = 0;
    printf("Enter your number: ");
    scanf("%lf", &a);
    
    if(a >= 10 && a <= 100)
    {
        printf("In range:\n");
    }
    else
    {
        printf("Out of range:\n");
    }
    return 0;
}
