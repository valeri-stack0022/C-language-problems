#include <stdio.h>

int polindrom_sum(int num)
{
    int reverse = 0;
    int sum = 0;
    int count = 0;
    int num1 = num;
    while(num){
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if(num1 == reverse){
        return 0;
    }
    while(num1 != reverse){
        sum = num1 + reverse;
        num1 = sum;
        reverse = 0;
        while(sum){
            reverse = reverse * 10 + sum % 10;
            sum /= 10;
        }
        ++count;
    }
    return count;
    
}

int main()
{
    int num = 0;
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);
    printf("Count -> %d\n",polindrom_sum(num));
    return 0;
}
