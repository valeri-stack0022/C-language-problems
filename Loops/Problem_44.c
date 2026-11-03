#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; ++i){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("Perfect number: \n");
    }
    else{
        printf("Not perfect number: \n");
    }
    return 0;
}
