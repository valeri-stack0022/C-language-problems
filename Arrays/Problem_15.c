#include <stdio.h>
#define SIZE 6

int main()
{
    char arr[SIZE] = {};
    printf("Input character array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }

    for(int i = 0; i < SIZE; ++i){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] + 32;
            printf("%c ", arr[i]);
        }
        else{
            printf("%c ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
