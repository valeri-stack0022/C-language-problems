#include <stdio.h>

void Product_List(void)
{
    for(int i = 1; i <= 10; ++i){
        for(int j = 0; j <= 10; ++j){
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
}

int main()
{
    Product_List();
    return 0;
}
