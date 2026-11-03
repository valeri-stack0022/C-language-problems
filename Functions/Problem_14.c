#include <stdio.h>
#define SIZE 5

void charr(char arr[], int size)
{
    int temp = 0;
    for(int i = 0; i < size / 2; ++i){
        temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }
    for(int i = 0; i < size; ++i){
        printf("%c", arr[i]);
    }
}

int main()
{
    int size = SIZE;
    char arr[SIZE] = {};
    printf("Input 5 characters for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }
    charr(arr, size);
    printf("\n");
    return 0;


}
