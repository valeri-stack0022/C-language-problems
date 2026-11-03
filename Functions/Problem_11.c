#include <stdio.h>

void binary(int number)
{
    int num1 = number;
    int div = 1;
    while(number >= 2){
        number = number / 2;
        div = div * 2;
    }

    int bit = 0;
    while(div){
        bit = num1 / div;
        printf("%d", bit);
        num1 = num1 % div;
        div = div / 2;
    }
}

int main()
{
    int num = 0;
    printf("Input a number: ");
    scanf("%d", &num);
    binary(num);
    printf("\n");
    return 0;
}
