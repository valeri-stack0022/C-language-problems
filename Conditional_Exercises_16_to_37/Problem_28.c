#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t a = 0;
    int32_t b = 0;
    int32_t c = 0;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int32_t M1 = a + b;
    int32_t M2 = a + c;
    int32_t M3 = b + c;
    if(M1 > c && M2 > b && M3 > a)
    {
        printf("It's a triangle\n");
    }
    else if(M1 <= c || M2 <= b || M3 <= a)
    {
        printf("It's not a triangle\n");
    }

    return 0;
}
