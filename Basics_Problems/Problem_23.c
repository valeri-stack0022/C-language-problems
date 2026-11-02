#include <stdio.h>

int main()
{
    int year;
    year = 2004;
    printf("In 2030 my age: %d\n", 2030 - year );

    int number;
    printf("Enter your integer number: ");
    scanf("%d", &number);
    printf("Double: %d\n", number * 2);
    printf("Triple: %d\n", number * 3);

    return 0;
}
