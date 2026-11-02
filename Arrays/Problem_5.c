#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 integer numbers: ");

    for(int i = 0; i < SIZE; ++i){
        scanf("%d", & arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < SIZE; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Maxmimum number -> %d\n", max);

    int min = arr[0];
    for(int i = 1; i < SIZE; ++i){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum number -> %d\n", min);
    printf("Summary of Minimum and Maxmimum numbers -> %d\n", max + min);

    return 0;
}

