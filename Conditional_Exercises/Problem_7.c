#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter your integer number: ");
    scanf("%d", &a);

    if((a % 3 == 0) && (a % 5 == 0))
    {
        printf("FizzBuzz\n");
    }
    else if(a % 3 == 0)
    {
        printf("Fizz\n");
    }
    else if(a % 5 == 0)
    {
        printf("Buzz\n");
    }
    else
    {
        printf("Void\n");
    }
    return 0;
}
