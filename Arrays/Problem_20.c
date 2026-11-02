#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < SIZE - 1; ++i){
        if(arr[i] > arr[i + 1]){
            continue;
        }
        else{
            printf("NO\n");
            return 1;
        }
    }
    printf("YES\n");
    return 0;
}

