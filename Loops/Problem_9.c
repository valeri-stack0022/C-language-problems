#include <stdio.h>

int main()
{
    for(int i = 0; i <= 10; ++i){
        printf("[%d] -> \n", i);
        for(int j = 0; j <= 9; ++j){
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    printf("\n");
    return 0;
}
