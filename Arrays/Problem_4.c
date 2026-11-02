#include <stdio.h>
#define SIZE 6

int main()
{
    int arr[SIZE] = {};
    printf("Input 6 integer numbers: ");
    
    for(int i = 0;  i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for(int i = 1; i < SIZE; ++i){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum number -> %d\n", min);

    int target = min;
    for(int i = 0; i < SIZE; ++i){
        if(target == arr[i]){
            printf("Minimum number's index -> %d\n", i);
        }
    }
    return 0;
}
