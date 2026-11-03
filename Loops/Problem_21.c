#include <stdio.h>

int main()
{
    int num = 0;
    int n1 = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= i; ++j){
            if(i % 2 == 1 ){
                if(j % 2 != 0){
                printf("%d", 1);
                }
                else if(j % 2 == 0){
                printf("%d", 0);
                }
            }
            else if(i % 2 == 0){
                if(j % 2 != 0){
                printf("%d", 0);
                }
                else if(j % 2 == 0){
                printf("%d", 1);
                }
            }
        }
        printf("\n");
   }
}
