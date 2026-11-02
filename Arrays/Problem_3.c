#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE] = {};
    printf("Input 5 integer numbers: ");

    for(int i = 0;  i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

    int index = 1;
    int max = arr[0];
    while(index < SIZE){
        if(max < arr[index]){
            max = arr[index];
        }
        ++index;
    }
    printf("Maxmum number -> %d\n", max);

    int target = max;
    for(int i = 0; i < SIZE; ++i){
        if(target == arr[i]){
            printf("Maximum number index -> %d\n", i);
        }
    }
    
}
