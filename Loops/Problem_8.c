#include <stdio.h>

int main()
{
    int num = 0;
    do{
        printf("Enter a integer number in range [1-9]: ");
        scanf("%d", &num);

    }while(num < 1 && num > 9);
    printf("\n");

    for(int n = 0; n <= 9; ++n){
        printf("%d * %d = %d\n", num, n, num * n);
    }
    printf("\n");

    return 0;
}
