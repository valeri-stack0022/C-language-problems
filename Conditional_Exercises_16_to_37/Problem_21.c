#include <stdio.h>

int main()
{
    char sym;
    printf("Enter your symbol: ");
    scanf("%c", &sym);
    if(sym >= '0' && sym <= '9')
    {
        printf("Digit symbol: \n");
    }
    else
    {
        printf("Not digit symbol: \n");
    }

    return 0;
}
