#include <stdio.h>

int main()
{
    int birthday_year;
    printf("Enter your birthday year: ");
    scanf("%d", &birthday_year);

    printf("To 2026: %d years.\n", 2026 - birthday_year);
    return 0 ;
}
