#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("Input two integer numbers: ");
    scanf("%d %d", &a, &b);

    if(b != 0)
    {
        printf("Divide: %d\n", a / b);
    }
    else
    {
        printf("Can't divide, because second number is 0:\n");
    }

    return 0;
}
