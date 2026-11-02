#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter 3 digit number: ");
    scanf("%d", &a);

    if(a >= 100 && a <= 999)
    {
        if((a / 100) == (a % 10))
        {
            printf("Symetric\n");
        }
        else
        {
            printf("Not symetric\n");
        }   

        }

    else
    {
        printf("Wrong number:\n");
    }
        return 0;
 }

