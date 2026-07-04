#include <stdio.h>

int main()
{
	int x = 0;
        printf("Enter a three-digit number: ");
        scanf("%d", &x);

	if(x >= 100 && x <= 999)
		{
	if((x % 10) >= (x / 100) && (x % 10) >= ((x / 10) % 10))
		{
		printf("%d\n", x % 10);
		}
	if((x / 100) > (x % 10) && (x / 100) > ((x / 10) % 10))
		{
		printf("%d\n", x / 100);
		}
	if(((x / 10) % 10) >= (x / 100) && ((x / 10) % 10) > (x % 10))
		{
		printf("%d\n", ((x / 10) % 10));
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}

	return 0;
}
