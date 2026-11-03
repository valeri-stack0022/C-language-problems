#include <stdio.h>

int digit = 0;
int product = 1;
int count = 0;
int sum = 0;

int Armstrong(int num)
{
    int num1 = num;
    int num2 = num1;
    while(num){
        digit = num % 10;
        num /= 10;
        ++count;
    }
    while(num1){
        digit = num1 % 10;
        num1 /= 10;
        for(int i = 0; i < count; ++i){
            product *= digit;
        }
        sum += product;
        product = 1;
    }
    if(sum == num2){
        return 1;
    }
    else{
        return 0;
    }
}

/*int main()
{
    int num = 0;
    do{
        printf("Input natural number: ");
        scanf("%d", &num);
    }while(num <= 0);
    printf("%d\n", Armstrong(num));

}*/
