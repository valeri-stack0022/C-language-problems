#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input integer numbers array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int number = 0;
    printf("Input a number for search in array: ");
    scanf("%d", &number);

    for(int i = 0; i < SIZE; ++i){
        if(number == arr[i]){
            printf("Yes\n");
            return 1;
        }
    }
    printf("No\n");
    return 0;
    
}
