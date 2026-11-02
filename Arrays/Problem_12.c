#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input integer numbers array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < SIZE; ++i){
        if(arr[i] & 1 != 0){
            ++count;
        }
    }
    printf("Odd numbers count -> %d", count);
    printf("\n");
    return 0;
}
