#include <stdio.h>

int main()
{
    int num = 10;
    while(num >= 0)
    { 
        printf("%d ", num);
        --num;
    }
    printf("\n");

    int num1 = 11;
    do
    {
        --num1;
        printf("%d ", num1);

    }while(num1 > 0);

    printf("\n");

    for(int num2 = 10; num2 >= 0; --num2)
    {
        printf("%d ", num2);
    }

    return 0;
}
