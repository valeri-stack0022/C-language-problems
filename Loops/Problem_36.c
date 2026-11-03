#include <stdio.h>

int main()
{
    int num = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    for(int i = 1; i <= num; ++i){
        if(num % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
