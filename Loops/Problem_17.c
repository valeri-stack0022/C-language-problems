#include <stdio.h>

int  main()
{
    int num = 0;
    
    do{
        printf("Input a integer number >= 1: ");
        scanf("%d", &num);
    }while(num < 1);

    for(int i = 1; i <= num; ++i){
        for(int j = 0; j < i; ++j){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
