#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter integer number: ");
    scanf("%d", &a);

    if(a < 0)
    {
        if(a & 1)
        {
            printf("Negative and odd\n");
        }
        else
        {
            printf("Other\n");
        }
    }
    else if(a > 0)
    {
        if(!(a & 1))
        {
            printf("Positive and even\n");
        }
        else
        {
            printf("Other\n");
        }

    }
    
  
    return 0;
}
