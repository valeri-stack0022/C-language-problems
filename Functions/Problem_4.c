#include <stdio.h>

int digit_sum(int number)
{
    int result = 0;
    int sum = 0;
    while(number)
    {
        result = number % 10;
        number = number / 10;
        sum = sum + result;
    }
    return sum;
}

/*int main()
{
    int number = 0;
    printf("Input a number: ");
    scanf("%d", &number);
    printf("Sum of digits: %d\n", digit_sum(number));
    return 0;
}*/

