#include <stdio.h>
#define SIZE1 5
#define SIZE2 5

int main()
{
    int arr1[SIZE1] = {};
    int arr2[SIZE2] = {};
    printf("Input first array's (5) numbers: ");
    for(int i = 0; i < SIZE1; ++i){
        scanf("%d", &arr1[i]);
    }

    printf("Input second array's (5) numbers: ");
    for(int j = 0; j < SIZE2; ++j){
        scanf("%d", &arr2[j]);
    }

    for(int i = 0; i < SIZE1; ++i){
        for(int j = 0; j < SIZE2; ++j){
            if(i == j){
                printf("Products same index(%d) numbers: %d\n", i, arr1[i] * arr2[j]);
            }
            else{
                continue;
            }
        }   
    }
    return 0;
}


