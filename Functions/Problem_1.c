#include <stdio.h>

void Product_List(int number)
{
    for(int i = 0; i <= 10; ++i){
        printf("%d * %d = %d \n", i, number, i * number);
    }
    return;
}

/*int main()
{
    int number = 0;
    printf("Input a number: ");
    scanf("%d", &number);
    printf("\n");
    Product_List(number);
    return 0;
}*/

