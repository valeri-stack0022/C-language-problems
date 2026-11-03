#include <stdio.h>

/*int main()
{
    int num;
    int result = 1;
    int result1 = 1;
    int reverse = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);
    while(num){
        if(num % 2 == 1){
            result = result * 1;
            printf("%d", result);
            num = num / 2;
        }
        else if(num % 2 == 0){
            result1 = result1 * 0;
            printf("%d", result1);
            num = num / 2;
        }
    }
    printf("\n");
}*/

int main()
{
    int num = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num < 0);

    int num1 = num;

    int div = 1;
    while(num >= 2){
        num /= 2;
        div *= 2;
    }

      int bit = 0;
    while(div){
        bit = num1 / div;
        printf("%d", bit);
        num1 = num1 % div;
        div /= 2;
    }
    printf("\n");
}


