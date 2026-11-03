#include <stdio.h>
#define SIZE 8

int main()
{
    int num = 0;
    int arr[SIZE] = {};
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    for(int i = 0; i < num; ++i){
        arr[i] = num % 10;
        num /= 10;
    }

    int max = arr[0];
    for(int i = 0; i < SIZE; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Big digit -> %d\n", max);
    return 0;
}
