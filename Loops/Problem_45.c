#include <stdio.h>

int main()
{
    long long int num = 0;
    do{
    printf("Input a integer number: ");
    scanf("%lld", &num);
    }while(num <= 0);
    int digit = 0;
    int count1 = 0, count2 = 0, count3 = 0;

    while(num){
        digit = num % 10;
        if(digit % 2 == 0){
            ++count1;
        }
        if(digit % 2 != 0){
            ++count2;
        }
        if(digit == 0){
            ++count3;
        }
        num = num / 10;
    }
    printf("Count of even digits: %d\n", count1);
    printf("Count of odd digits: %d\n", count2);
    printf("Count of 0 digit: %d\n", count3);

    return 0;
}
