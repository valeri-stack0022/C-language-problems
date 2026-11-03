#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int div = 0;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 < num2){
        for(int i = 1; i <= num1; ++i){
            if((num1 % i == 0) && (num2 % i == 0)){
                div = i;
            }
        }
        printf("Amenamec yndhanur bajanarar: %d\n", div);
    }
    else{
        for(int i = 1; i <= num2; ++i){
            if((num2 % i == 0) && (num1 % i == 0)){
                div = i;
            }
        }
        printf("Amenamec yndhanur bajanarar: %d\n", div);
    }


}
