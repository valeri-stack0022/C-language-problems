#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    for(int i = 1; i <= num; ++i){
        sum += i;
    }
    printf("Summary -> %d\n", sum);
}
