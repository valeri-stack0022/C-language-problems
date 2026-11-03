#include <stdio.h>

int main()
{
    int num = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= num; ++j){
            for(int k = 1; k <= num; ++k){
                if(i + j + k == num){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
}
