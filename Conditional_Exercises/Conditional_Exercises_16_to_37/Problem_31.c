#include <stdio.h>

int main()
{
    unsigned char age;
    printf("Input your age: ");
    scanf("%hhd", &age);

    if(age > 0 && age <= 2)
    {
        printf("Childhood\n");
    }
    else if(age >= 3 && age <= 12)
    {
        printf("Schoolchild\n");
    }
    else if(age >= 13 && age <= 19)
    {
        printf("Youth\n");
    }
    else if(age >= 20 && age <= 59)
    {
        printf("Adult\n");
    }
    else if(age >= 60)
    {
        printf("Old\n");
    }

    return 0;
}
