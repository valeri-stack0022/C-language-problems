#include <stdio.h>
#define SIZE 7

int ArithProgression(int arr[], int size)
{
    int dif = 0;
    dif = arr[0] - arr[1];
    for(int i = 1; i < size - 1; ++i){
        if(arr[i] - arr[i + 1] != dif){
            return 0;
        }
        else{
            continue;
        }
    }
    return 1;
}

int Sum_of_ArithProgression(int arr[], int size)
{
    if(ArithProgression(arr, size)){
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
    printf("Input 7 numbers for sorted(Arithmetic progression) array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    if(Sum_of_ArithProgression(arr, size)){
        printf("It's a Arithmetic Progression\n");
        printf("Sum of numbers -> %d", Sum_of_ArithProgression(arr, size));
    }
    else{
        printf("It's not a Arithmetic Progression\n");
    }

}
