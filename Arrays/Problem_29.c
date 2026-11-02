#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < SIZE; ++i){
        int is_unique = 1;
        for(int j = 0; j < SIZE; ++j){
            if(i != j){
                if(arr[i] == arr[j]){
                    is_unique = 0;
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        if(is_unique){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
