#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; ++i){
        if(i % 3 == 0){
            printf("Result -> %d\n", i);
        }
    }
}
