#include <stdio.h>
#define SIZE1 5
#define SIZE2 5

int main()
{
    int arr1[SIZE1] = {};
    printf("Input numbers for first array: ");
    for(int i = 0; i < SIZE1; ++i){
        scanf("%d", &arr1[i]);
    }

    int arr2[SIZE2] = {};
    printf("Input numbers for second array: ");
    for(int i = 0; i < SIZE2; ++i){
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < SIZE1; ++i){
        for(int j = 0; j < SIZE2; ++j){
            if(i == j){
                if(arr1[i] == arr2[j]){
                    continue;
                }
                else{
                    printf("NO\n");
                    return 1;
                }
            }
        }
    }
    printf("YES\n");
    return 0;
}
