#include <stdio.h>
#define SIZE 7

int Binary_Search(int arr[], int size, int number)
{
    int mid = 0;
    int l = 0;
    int r = size - 1;
    mid = (r - l) / 2 + l;
    while(number != arr[mid]){
        mid = (r - l) / 2 + l;
        if(arr[mid] == number){
            return number;
        }
        else{
            if(number < arr[mid]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
    }
    return mid;
}



int main(){
    int size = SIZE;
    int arr[SIZE] = {};
    printf("Input 7 numbers for array: ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    int search_number = 0;
    printf("Input a number for search in array: ");
    scanf("%d", &search_number);
    printf("%d\n", Binary_Search(arr, size, search_number));
}
