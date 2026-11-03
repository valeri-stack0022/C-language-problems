#include <stdio.h>

int main()
{
    int n = 0;
    while(n <= 100)
    {
        if(n % 3 == 0 && n % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(n % 5 == 0)
        {
            printf("Buzz\n");
        }
        else if(n % 3 == 0)
        {
            printf("Fizz\n");
        }
        else
        {
            printf("Number: %d\n", n);
        }
        ++n;
    }
    return 0;
}
