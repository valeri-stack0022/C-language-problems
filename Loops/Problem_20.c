#include <stdio.h>

int main()
{
    int num = 0;
    int number = 0;

    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);
        
    }while(num < 1);

    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= i ; ++j){

            printf("%d ", ++number);
        }
        printf("\n");
    }
}
