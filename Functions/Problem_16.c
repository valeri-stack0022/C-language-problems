#include <stdio.h>
#define SIZE 7

int OneNumber_search(int arr[], int size)
{
    for(int i = 0; i < size; ++i){
        int flag = 1;
        for(int j = 0; j < size; ++j){
            if(i != j){
                if(arr[i] == arr[j]){
                    flag = 0;
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        if(flag){
            return arr[i];
        }
    }
}

int main()
{
    int arr[SIZE] = {1, 3, 3, 2, 2, 5, 5};
    int size = SIZE;
    printf("%d \n", OneNumber_search(arr, size));
}
