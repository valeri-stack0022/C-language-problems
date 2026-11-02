#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 integer numbers: ");

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum = sum + arr[i];
    }
    printf("Middle arithmethic value: %d\n", sum / SIZE);
    return 0;
}
