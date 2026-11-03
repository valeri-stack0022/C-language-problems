#include <stdio.h>

int main()
{
    char sym;
    do{
        printf("Enter a letter: ");
        scanf(" %c", &sym);

    }while(sym < 'A' || (sym > 'Z' && sym < 'a') || sym > 'z');
    printf("\n");

    if(sym == 'a' || sym == 'e' || sym == 'i' || sym == 'o' || sym == 'u' || sym == 'y'){
        printf("Vowel:\n");
    }
    else{
        printf("Consonant:\n");
    }

    return 0;
}
