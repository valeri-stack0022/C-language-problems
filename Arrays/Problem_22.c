#include <stdio.h>
#define SIZE 5

int main()
{
    int target = 0;
    int arr[SIZE] = {};
    printf("Input numbers for array: ");

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    printf("Input a number for search: ");
    scanf("%d", &target);

    for(int i = 0; i < SIZE; ++i){
        if(arr[i] == target){
            printf("That number index is -> %d\n", i);
            return 1;
        }
        else{
            continue;
        }
    }
    printf("-1\n");
    return 0;
}

