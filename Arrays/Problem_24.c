#include <stdio.h>
#define SIZE 7

int main()
{
    int arr[SIZE] = {1, 1, 2, 3, 3, 4, 4};
    for(int i = 0; i < SIZE; ++i){
        int flag_unique = 1;
        for(int j = 0; j < SIZE; ++j){
            if(i != j){
                if(arr[i] == arr[j]){
                    flag_unique = 0;
                    break;
                }
            }
            else {
                continue;
            }
        }
        if(flag_unique){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
