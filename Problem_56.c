#include <stdio.h>

int main()
{
	int x = 0;
        printf("Enter a three-digit number: ");
        scanf("%d", &x);
	int k = 0;
	float result = 0;

	if(x >= 100 && x <= 999)
	{
		if((x % 10) > ((x / 10) % 10))
		{
			k = (x % 10) + (x / 100) + ((x / 10) % 10);
			result = (float)k / x;
			printf("%0.4f\n", result);
		}
		else
		{
			printf("%d\n", x);
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}

	return 0;
	
}
