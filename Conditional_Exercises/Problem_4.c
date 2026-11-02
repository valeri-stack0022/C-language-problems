#include <stdio.h>

int main()
{
    int number;
    printf("Enter a integer number: ");
    scanf("%d", &number);

    if(!(number & 1))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
