#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 0;
        bool t = true;
	int k = 0;
	int v = 0;
	float result = 0;
        printf("Enter a three-digit number: ");
        scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &k);

	if(x >= 100 && x <= 999) 
	{
		printf("It's a correct three-digit number:\n");
		if(x > k)
		{	
			v = (x % 10) + (x / 100) + ((x / 10) % 10);
			result = (float)x / v;
			printf("%.2f\n", result);
		}
		else
		{
			v = (x % 10);
			result = (float)v / x;
			printf("%.4f\n", result);
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}

	return 0;

}

