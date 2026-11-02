#include <stdio.h>

int main()
{
    char sym;
    printf("Input your simbol: ");
    scanf("%c", &sym);

    if(sym >= 'A' && sym <= 'Z')
    {
        printf("UpperCase:\n");
    }
    else if(sym >= 'a' && sym <= 'z')
    {
        printf("LowerCase:\n");
    }
    else if(sym >= '0' && sym <= '9')
    {
        printf("Digit:\n");
    }
    else
    {
        printf("Special Character:\n");
    }
    return 0;
}
