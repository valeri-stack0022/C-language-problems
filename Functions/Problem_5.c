#include <stdio.h>

int power(num, exp);

int main()
{
    int num = 0;
    int exp = 0;
    printf("Input a positive integer number: ");
    scanf("%d", &num);
    printf("Input a exp: ");
    scanf("%d", &exp);
    printf("Result -> %d\n", power(num, exp));
}

int power(int number, int exp)
{
    int result = 1;

    for(int i = 1; i <= exp; ++i){
        result = result * number;
    }
    return result;
}

