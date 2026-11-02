#include <stdio.h>
#define SIZE 6

int main()
{
    int arr[SIZE] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int max = arr[1] - arr[0];
    for(int i = 1; i < SIZE - 1; ++i){
        if(max < arr[i + 1] - arr[i]){
            max = arr[i + 1] - arr[i];
        }
    }
    printf("Maximum diference -> %d\n", max);
    return 0;
}
