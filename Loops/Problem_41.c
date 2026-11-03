#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int other = 0;
    printf("Input two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        for(int i = num2; i >= 1; --i){
            if((num2 * i) % num1 == 0){
                other = num2 * i;
            }
        }
        printf("Amenapoqr yndhanur bazmapatik: %d\n", other);
    }
    else{
        for(int j = num1; j >= 1; --j){
            if((num1 * j) % num2 == 0){
                other = num1 * j;
            }
        }
        printf("Amenapoqr yndhanur bazmapatik: %d\n", other);
    }
    return 0;
}
