#include <stdio.h>

int main()
{
    unsigned char age;
    printf("Enter age value: ");
    scanf("%hhd", &age);
    if(age < 0 || age > 120)
    {
        printf("Wrong input:\n");
    }
    else
    {
        printf("Correct input:\n");
    }

    return 0;
}
