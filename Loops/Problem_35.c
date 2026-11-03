#include <stdio.h>

int main()
{
    int num = 0;
    int count = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    for(int i = 1; i <= num; ++i){
        if(num % i == 0){
            ++count;
        }
    }
    printf("Count -> %d\n", count);
}
