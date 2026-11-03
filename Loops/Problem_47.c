#include <stdio.h>

int main()
{
    int num = 0;
    int reverse = 0;
    do{
        printf("Input a integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    while(num){
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    int d1 = 0;
    int d2 = 0;
    d1 = reverse % 10;
    reverse /= 10;
    d2 = reverse % 10;
    while(reverse){
        if(d1 > d2){
            d1 = d2;
            reverse /= 10;
            d2 = reverse % 10;
        }
        else if(d1 <= d2){
            printf("Voch nvazox kargov\n");
            return 0;
        }
    }
    printf("Nvazox kargov\n");
    return 0;
}
