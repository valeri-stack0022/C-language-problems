#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter three digits for number: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a != 0)
    {
    if(b == 0 || c == 0)
    {
        printf("There is a zero digit:\n");
    }
    else
    {
        printf("No zero digit\n");
    }

    }
    else if(a == 0)
    {
        printf("It's not a three digit number:\n");
    }

    return 0;

}
