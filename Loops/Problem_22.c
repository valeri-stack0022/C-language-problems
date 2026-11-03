#include <stdio.h>

int main()
{
    int num = 0;
    printf("Input a positive integer number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= num; ++j){
            if(i == 1 || i == num){
                printf("*");
            }
            else if(i != 1 || i != num){
                if(j == 1 || j == num){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
