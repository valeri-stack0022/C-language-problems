#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    
    int first = arr[0];
    for(int i = 0; i < SIZE; ++i){
        if(i < SIZE - 1){
            arr[i] = arr[i + 1];
            printf("%d ", arr[i]);
        }
        else if(i == SIZE - 1)
         printf("%d", first); 
    }
    printf("\n");
    return 0;
}
