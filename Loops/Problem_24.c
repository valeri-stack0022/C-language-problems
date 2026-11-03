#include <stdio.h>

int main()
{
    int num = 4;
    int Jvalue = num * 2 - 1;
    int mid = Jvalue / 2;

    for(int i = 0; i < num - 1; ++i){
        for(int j = 1; j < Jvalue; ++j){
                if(mid + i == j || mid - i == j){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
        }
        printf("\n");
    }
    for(int i = 0; i < 5; ++i){
        printf("* ");
    }
    printf("\n");
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 5; ++j){
            if(i != 0 || i != 2){
                if(j == 0 || j == 4){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    for(int i = 0; i < 5; ++i){
        printf("* ");
    }
    printf("\n");


}
