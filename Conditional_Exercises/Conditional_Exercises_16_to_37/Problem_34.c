#include <stdio.h>

int main()
{
    char sym;
    printf("Input sumbol(R or Y or G): ");
    scanf("%c", &sym);

    switch(sym)
    {
        case 'R':
            printf("STOP\n");
            break;
        case 'Y':
            printf("Get Ready\n");
            break;
        case 'G':
            printf("GO\n");
            break;
        default:
            printf("Wrong symbol\n");
    }
    return 0;
}
