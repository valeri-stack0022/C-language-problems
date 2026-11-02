#include <stdio.h>

int main()
{
    int hour = 0;
    printf("Enter your hour number: ");
    scanf("%d", &hour);
    printf("Minutes: %d\n", hour * 60);

    return 0;
}
