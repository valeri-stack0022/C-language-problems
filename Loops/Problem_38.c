#include <stdio.h>

int main()
{
    int num = 0;
    int numbers = 0;
    do{
        printf("Input a Not negative integer number: ");
        scanf("%d", &num);
    }while(num < 0);
    int sum = 0;

    for(int i = 1; i <= num; ++i){
        scanf("%d", &numbers);
        sum += numbers;
        }
    printf("Middle summary -> %d", (double)sum/num);
}
