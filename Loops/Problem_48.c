#include <stdio.h>
#define SIZE 4

int main()
{
    int num = 0;
    int arr[SIZE] = {};
    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
    }while(num <= 0);

    int digit = 0;
    for(int i = 0; i < SIZE; ++i){
        arr[i] = num % 10;
        num /= 10;
    }
    
    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            if(i != j){
                if(arr[i] == arr[j]){
                    printf("YES\n");
                    return 1;
                }
            }
        }
    }
    printf("NO\n");
    
    return 0;
}
