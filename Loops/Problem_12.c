#include <stdio.h>

int main()
{
    int num;
    int reverse = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);
    printf("Result -> ");

    while(num > 0){
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    printf("\n");
    printf("%d", reverse);
    return 0;
} 
