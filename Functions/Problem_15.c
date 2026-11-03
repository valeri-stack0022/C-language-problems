#include <stdio.h>
#define SIZE 10

int ArithProgress(int num)
{
    int num1 = num % 10;
    num /= 10;
    int num2 = num % 10;
    int dif = num1 - num2;
    while(num){
        num1 = num2;
        num /= 10;
        if(num == 0){
            return 1;
        }
        num2 = num % 10;
        if(num1 - num2 != dif){
            return 0;
        }
    }
}

int main()
{
    int n = 0;
    do{
        printf("Input a number(But not two digit nambers): ");
        scanf("%d", &n);
    }while(n <= 99);
      
    int size = SIZE;
    printf("%d\n", ArithProgress(n));
    
}
