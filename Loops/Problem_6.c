#include <stdio.h>

int main()
{
    printf("Numbers in range [0 - 100]:\nExept: 3,5 and 15\n");
    printf("\n");
        for(int num = 0; num < 3; ++num){
            printf("%d, ", num);
        }
            printf("Except(3), ");

            for(int num = 4; num <= 4; ++num){
                printf("%d, ", num);
        }
            printf("Except(5), ");

            for(int num = 6; num <= 14; ++num){
                printf("%d, ", num);
        }
            printf("Except(15), ");

            for(int num = 16; num <= 100; ++num){
               printf("%d, ", num); 
        }
            printf("\n");
            return 0;
    
}
