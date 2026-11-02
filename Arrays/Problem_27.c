#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int temp = arr[0];
    for(int i = 0; i < SIZE; ++i){
        if(i == 0){
            arr[0] = arr[SIZE - 1];
        }
        if(i > 0){
            arr[i] = temp;
            temp = arr[i + 1] - arr[i];

        }
        printf("%d ", arr[i]);
    }
    return 0;
}
