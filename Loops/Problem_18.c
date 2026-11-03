#include <stdio.h>

int main()
{
    int num = 0;

    do{
        printf("Input a NOT negativ number: ");
        scanf("%d", &num);

    }while(num < 0);

    for(int i = 0; i <= num - 1; ++i){
        for(int j = 0; j <= num - 1; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
