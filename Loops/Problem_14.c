#include <stdio.h>

int main()
{
    int num = 0;
    int reverse = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);
    int num1 = num;

    while(num > 0){
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    if(reverse == num1){
        printf("Polindrom number: %d\n", num1);
    }
    else{
        printf("Not polindrom number: %d\n", num1);
    }
    printf("\n");
    return 0;
} 
