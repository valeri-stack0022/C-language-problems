#include <stdio.h>

int main()
{
        int x = 0;
        printf("Enter a three-digit number: ");
        scanf("%d", &x);
        int i = x % 10;
        int j = x / 100;
        int k = ((x / 10) % 10);

        if(x >= 100 && x <= 999)
              	if(i >= j && j >= k)
                        printf("%d %d %d\n", i,j,k);
                else if(i >= k && k >= j)
                        printf("%d %d %d\n", i,k,j);
                else if(j >= i && i >= k)
                        printf("%d %d %d\n", j,i,k);
                else if(j >= k && k >= i)
                        printf("%d %d %d\n", j,k,i);
                else if(k >= i && i >= j)
                        printf("%d %d %d\n", k,i,j);
                else if(k >= j && j >= i)
                        printf("%d %d %d\n", k,j,i);
        else
        {
                printf("Wrong number! Please try again: \n");
        }


}

