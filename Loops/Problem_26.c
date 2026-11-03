#include <stdio.h>

int main()
{
    int num = 0;
    int exp = 1;
    int degree = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);
    printf("And input a degree for your number: ");
    scanf("%d", &degree);

    while(degree){
        exp *= num;
        --degree;
    }
    printf("Result -> %d\n", exp);
}
