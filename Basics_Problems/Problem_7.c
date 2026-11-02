#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("Enter your three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Middle number: %d\n", (a + b + c)/3);
}
