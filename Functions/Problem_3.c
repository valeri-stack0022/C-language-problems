#include <stdio.h>

int factorial(int number)
{
    int result = 1;

    for(int i = 1; i <= number; ++i){
        result = result * i;       
    }
    return result;
}

/*int main()
{
    int number = 0;
    printf("Input a number: ");
    scanf("%d", &number);
    printf("Factorial -> %d \n", factorial(number));
    return 0;
}*/


