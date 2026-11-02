#include <stdio.h>
#define SIZE 10

int main()
{
    char arr[SIZE] = {};

    printf("Input characters in array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%c", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < SIZE; ++i){
        if((arr[i] < 'A' || arr[i] > 'Z') && (arr[i] < 'a' || arr[i] > 'z')){
            ++count;
        }
    }
    printf("Count of Not Alpha characters -> %d\n", count);
    return 0;
}

