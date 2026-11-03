#include <stdio.h>

int main()
{
    int num = 0;
    
    do{
        printf("Input a Not negative number: ");
        scanf("%d", &num);
    }while(num < 0);

    for(int i = 1; i <= num; ++i){
        for(int j = 0; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
