#include <stdio.h>

int main()
{
    int num = 0;
    while(num < 11)
    {
        printf("%d ", num);
        ++num;
    }
    printf("\n");

    int num1 = -1;

    do
    {   
        ++num1;
        printf("%d ", num1);

    }while(num1 < 10);

    printf("\n");

    for(int num2 = 0; num2 < 11; ++num2)
    {
        printf("%d ", num2);
    }

    
    return 0;
}
