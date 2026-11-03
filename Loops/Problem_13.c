#include <stdio.h>

int main()
{
    int num;
    char digits;
    int reverse = 0;
    int result = 1;
    int result2 = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);

    while(num > 0){
        result = num % 10;
        reverse = reverse * 10 + result;
        num = num / 10;
    }
    printf("\n");

    while(reverse > 0){
        result2 = reverse % 10;
        reverse = reverse / 10;
        printf("%d", result2);
    }
    printf("\n");

}
