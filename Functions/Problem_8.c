#include <stdio.h>

int reverse(int number)
{
    int reverse = 0;
    while(number){
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    return reverse;
}

/*int main()
{
    int num = 0;
    printf("Input a number: ");
    scanf("%d", &num);
    printf("%d\n", reverse(num));
}*/
