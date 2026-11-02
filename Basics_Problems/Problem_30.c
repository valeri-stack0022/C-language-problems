#include <stdio.h>

int main()
{
    int current_money;
    printf("Current money by Dram: ");
    scanf("%d", &current_money);

    int chocolate_price = 1500;
    printf("My chocolate count: %d\n", current_money / chocolate_price);

    return 0;
}
