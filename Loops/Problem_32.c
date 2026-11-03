#include <stdio.h>

int main()
{
    int num = 0;
    int reverse = 0;
    int digit = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);
    int real_number = num;

    while(num){
        digit = num % 10;
        reverse = reverse * 10 + num % 10; 
        num = num / 10;
    }
    if(real_number == reverse){
        printf("Polindrom: \n");
    }
    else{
        printf("Not Polindrom: \n");
    }

    return 0;
}

