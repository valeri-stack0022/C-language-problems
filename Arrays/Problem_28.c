#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};    
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for(int i = 0; i < SIZE / 2; ++i){
        temp = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = arr[i];
        arr[i] = temp;
    }

    printf("Reverse array -> ");
    for(int i = 0; i < SIZE; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
