#include <stdio.h>

int main()
{
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    
    int hours = minutes / 60;
    printf("Hours: %d\n", hours);

    return 0;

}
