#include <stdio.h>

void hexadecimal(int num)
{
    int num1 = num;
    int div = 1;
    while(num >= 16){
        num = num / 16;
        div = div * 16;
    }

    int group = 0;
    while(div){
        group = num1 / div;
        switch (group){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", group);
        }
        num1 = num1 % div;
        div = div / 16;
    }
}

int main()
{
    int num = 0;
    printf("Input a number: ");
    scanf("%d", &num);
    hexadecimal(num);
    printf("\n");
    return 0;
}
