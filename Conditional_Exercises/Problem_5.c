#include <stdio.h>

int main()
{
    unsigned char age = 0;
    printf("Enter your age: ");
    scanf("%hhd", &age);

    if(age < 18)
    {
        printf("Permission denied!\n");
    }
    else
    {
        printf("Permitted\n");
    }
    return 0;

}
