#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 integer numbers: ");

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < SIZE; ++i){
        arr[i] = arr[i]/SIZE;
        printf("After modifying the array number%d։ %.2lf\n", i, (double)arr[i]);
    }

    return 0;
}
