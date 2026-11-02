#include <stdio.h>

int main()
{
    char symbol;
    printf("Enter your symbol: ");
    scanf("%c", &symbol);

    if(symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol =='u' || symbol == 'y')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
}
