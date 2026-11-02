#include <stdio.h>
#define SIZE 6

int main()
{
    char arr[SIZE] = {};
    printf("Input characters in array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }

    for(int i = 0; i < SIZE; ++i){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 32;
            printf("%c ", arr[i]);
        }
        else{
            continue;
        }
    }
    printf("\n");
    return 0;
}
