#include <stdio.h>

int Fibonachi(int index)
{
    if(index == 0){
        return 0;
    }
    else if(index == 1){
        return 1;
    }
    int number = 0;
    int left = 0;
    int right = 1;
    while(index){
        if(index > 1){
        number = left + right;
        left = right;
        right = number;
        }
        --index;
    }
    return number;
}

int main()
{
    int index = 0;
    do{
        printf("Input a not negative number: ");
        scanf("%d", &index);
    }while(index < 0);
    printf("%d\n", Fibonachi(index));
    return 0;
}
