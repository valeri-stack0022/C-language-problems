#include <stdio.h>
#define SIZE 6

int main()
{
    int arr[SIZE] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for(int i = 0; i < SIZE - 1; ++i){
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        ++i;
    }

    printf("Popoxvac zangvac -> ");
    for(int i = 0; i < SIZE; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
