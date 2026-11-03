#include <stdio.h>

void prime_search(int num)
{
    for(int i = 2; i * i <= num; ++i){
        if(num % i == 0){
            printf("Not prime number: \n");
            return;
        }
    }
    printf("Prime number: \n");
}

int main()
{
    int num = 0;
    do{
        printf("Input a positive number: ");
        scanf("%d", &num);
    }while(num <= 0);
    prime_search(num);
    return 0;

}
