#include <stdio.h>

int main()
{
    short number;
    printf("Input integer number: ");
    scanf("%hd", &number);

    if(number >= -50 && number <= 50)
    {
        printf("In range:\n");
    }
    else
    {
        printf("Out of range:\n");
    }
    return 0;

}
