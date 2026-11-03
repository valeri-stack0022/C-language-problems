#include <stdio.h>

int main()
{
    int num = 0;
    printf("Input a number in range [0 - 100]: or 'q' for quit: ");
    
    while(scanf("%d", &num) == 1){
        if(num > 6){
            printf("Lower:\n");
        }
        else if(num < 6){
            printf("Higher: \n");
        }
        else if(num == 6){
            printf("You Won!!!!!");
        }
    }
    if(num == 'q'){
        return 1;
    }
    return 0;
}
