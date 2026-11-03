#include <stdio.h>

int main()
{
    printf("Odd numbers in range [0 - 100]:\n");
    int num = 0;
    while(num <= 100){
        if(num % 2 != 0){
            if(num == 99){
            
                printf("99 ");
            }
            else{
                printf("%d, ", num);
            }
        }
        ++num;
    }
    printf("\n");

    return 0;     
}
