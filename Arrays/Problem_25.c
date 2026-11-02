#include <stdio.h>

int main()
{
    int n = 0;
    printf("Input a integer number for size array: ");
    scanf("%d", &n);
    int arr[n] = {};
    printf("Input numbers for array: ");
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }


    int lost = 0;
    int sum1 = 0;
    int sum2 = 0;
    int count = 0;
    for(int j = 1; j <= n + 1; ++j){
        sum1 += j;
    }

    for(int i = 0; i < n; ++i){
        sum2 += arr[i];
        ++count;
    }
    lost = sum1 - sum2;
    printf("%d\n", lost);

}

