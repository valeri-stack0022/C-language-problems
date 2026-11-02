#include <stdio.h>
#define SIZE 6

int main()
{
    char arr[SIZE] = {};

    printf("Input in array 6 characters: ");
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }

    for(int i = SIZE - 1; i >= 0; --i){
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}

