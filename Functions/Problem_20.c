#include <stdio.h>
#define SIZE 7

int GeometricProgression(int arr[], int size)
{
    for(int i = 1; i < size - 1; ++i){
        if(arr[i] * arr[i] != arr[i - 1] * arr[i + 1]){
            return 0;
        }
        else{
            continue;
        }
    }
    return 1;
}

int Sum_of_GeoProgression(int arr[], int size)
{
    if(GeometricProgression(arr, size)){
        int sum = 0;
        for(int i = 0; i < size; ++i){
            sum += arr[i];
        }
        return sum;
    }
}

int main()
{
    int size = SIZE;
    int arr[SIZE] = {};
    printf("Input 7 numbers for sorted(Geometric Progression) array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    if(Sum_of_GeoProgression(arr, size)){
        printf("It's a Geometric Progression:\n");
        printf("%d\n", Sum_of_GeoProgression(arr, size));
    }
    else{
        printf("It's not a GeometricProgression:\n");
    }

}
