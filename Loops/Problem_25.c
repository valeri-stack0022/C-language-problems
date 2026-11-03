//Armstrong number

#include <stdio.h>

int main()
{
    int num = 0;
    int digit = 0;
    int product = 1;
    int count = 0;
    int sum = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);
    int num1 = num;
    int num2 = num1;
    
    while(num){
        digit = num % 10;
        num /= 10;
        ++count;
    }

    while(num1){
        digit = num1 % 10;
        num1 = num1 / 10;
        for(int i = 0; i < count; ++i){
            product *= digit;
            
        }
        sum += product;
        product = 1;
    }
    printf("\n");
    printf("Summary of digits cube -> %d\n", sum);
    if(sum == num2){
        printf("Armstrong number: \n");
    }
    else{
        printf("Not Armstrong number: \n");
    }
}

