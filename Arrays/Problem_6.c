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
    int multiple = 1;
    for(int i = 0; i < SIZE; ++i){
        sum = sum + arr[i];
        multiple = multiple * arr[i];
    }
    printf("Summary of array numbers -> %d\n", sum);
    printf("Multiple of array numbers -> %d\n", multiple);

    return 0;
}
