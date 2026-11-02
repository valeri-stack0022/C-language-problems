#include <stdio.h>
#define SIZE 5

int main() 
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    int l = 0;
    int r = SIZE - 1;

    while (l < r) {
        if ( (arr[l] & 1) == 0) {
            ++l;
        } else if ( (arr[l] & 1) == 1 && (arr[r] & 1) == 0) {
            arr[l] ^= arr[r];
            arr[r] ^= arr[l];
            arr[l] ^= arr[r];
        } else {
            --r;
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
