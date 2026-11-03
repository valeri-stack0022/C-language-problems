#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Input two integer numbers: ");
    scanf("%d %d", &a, &b);

    int numd = a;
    while(numd <= b)
    {
        if(numd % 5 == 0)
        {
            printf("Number -> %d\n", numd);
        }
        ++numd;
    }
    return 0;
}
