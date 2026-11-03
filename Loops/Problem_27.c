#include <stdio.h>

int main()
{
    int num = 0;
    int digit = 0;
    int reverse = 0;
    int sum = 0;
    int multiple = 1;
       do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);
    int num1 = num;

    while(num){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;

        if(digit == 3){
            printf("YES\n");
        }
        else{
            ;
        }
        if(digit != 5){
            printf("YES\n");
        }
        else if(digit == 5){
           ;
        }
        sum += digit;
        multiple *= digit;
        }
        if(sum > 20){
            printf("YES\n");
        }
        else{
            printf("No, Summary < 20: \n");
        }
        if(multiple < 30){
            printf("YES\n");
        }
        else{
            printf("No, Multiple < 20: \n");
        }
    int digit1 = 0;
    int digit3 = 0;
    while(reverse){
        digit1 = reverse % 10;
        reverse /= 10;
        digit3 = reverse % 10;
        if(digit1 < digit3){
            printf("YES ");
        }
        else{
            ;
        }
    }


        return 0;
}
