#include <stdio.h>

int main()
{
    unsigned char age;
    char male_or_female;
    printf("Enter your age: ");
    scanf("%hhd", &age);
    printf("Male(M) or Female(F): ");
    scanf(" %c", &male_or_female);

    if(age >= 60)
    {
        if((male_or_female == 'F' && age >= 60) || (male_or_female == 'M' && age >= 65))
        {
            printf("You are entitled to a pension\n");
        }
    }
    else
    {
        printf("Yor are young girl or boy :)\n");
    }

    return 0;
}
