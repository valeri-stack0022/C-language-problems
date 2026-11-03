#include <stdio.h>

int main()
{
    int num = 0;
    int result = 0;

    do{
        printf("Input a positive integer number: ");
        scanf("%d", &num);

    }while(num <= 0);

    int num1;

    for(int i = 2; i * i <= num; ++i){
        if(num % i == 0){
            printf("Not prime number: \n");
        }
    }
    printf("Prime Number: \n");
}

/*#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;  
    unsigned long div;  
    bool isPrime;        
    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");

    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n",
                           num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n",
                           num, div);
                isPrime = false;             }
        }
        if (isPrime)
            printf("%lu is prime.\n", num);

        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}*/ 
