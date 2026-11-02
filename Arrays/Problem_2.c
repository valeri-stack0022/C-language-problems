#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 integer numbers: ");

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for(int i = 1; i < SIZE; ++i){ // i-n 1-ic vor inqn iren chstugi
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum number: %d\n", min);
}
