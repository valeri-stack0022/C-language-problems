#include <stdio.h>

int main()
{
    int num = 0;
    int count = 0;
    do{
    printf("Input a integer number: ");
    scanf("%d", &num);
    }while(num <= 0);

        for(int i = 2; i * i <= num; ++i){
            if(num % i == 0){
                ;
            }
            ++count;
        }
    printf("Count of prime numbers -> %d", count);
    printf("\n");
}
