#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    printf("Input two integer numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; ++i){
        if(i % 3 == 0 && i % 5 != 0){
            sum += i;
        }
    }
    printf("%d", sum);
    printf("\n");
}
