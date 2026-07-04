#include <stdio.h>

int main()
{
 	int x = 0;
        printf("Enter a three-digit number: ");
        scanf("%d", &x);
        float result = 0;

	if(x >= 100 && x <= 999 && (x % 10) != 0)
	{
		if(x > 300)
		{
			result = (float)((x / 10) % 10) / (x % 10);
			printf("%0.2f\n", result);
		}
		else
		{
			result = (float)(x / 100) / (x % 10);
			printf("%0.2f\n", result);
		}
	}
	else
	{
		printf("Wrong number or third digit is 0 ! Please try again: \n");
	}

	return 0;
	
}
