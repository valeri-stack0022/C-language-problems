#include <stdio.h>
#define SIZE 10

int main()
{
    char arr[SIZE] = {};
    printf("Input characters array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf(" %c", &arr[i]);
    }

    int count  = 0;
    for(int i = 0; i < SIZE; ++i){
        if(arr[i] >= '0' && arr[i] <= '9'){
            ++count;
        }
    }
    printf("Count of digits: %d\n", count);
    return 0;
}
