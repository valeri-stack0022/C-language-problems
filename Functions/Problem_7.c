#include <stdio.h>

int is_prime(int a)
{
    for(int i = 2; i * i <= a; ++i){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}

int prime(int a){
    for(int i = 2; i <= a / 2; ++i){
        if(is_prime(i) && (is_prime(a - i))){
            printf("1\n");
            return 1;
        }
    }
    printf("0\n");
    return 0;
}

int main()
{
    int num = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    prime(num);

    return 0;
}
