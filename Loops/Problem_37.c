#include <stdio.h>

int main()
{
    int num = 0;
    printf("Input a number: ");
    scanf("%d", &num);
    int arr[num] = {};
    printf("Input numbers(count your input number) for array: ");
    for(int i = 0; i < num; ++i){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < num; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Maxmimum value -> %d\n", max);
    printf("Minimum value -> %d\n", min);
    return 0;
    
}
