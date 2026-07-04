#include <stdio.h>

int main()
{
	int x;
	printf("Enter a four-digit number: ");
	scanf("%d", &x);
	int result;

	if(x >= 1000 && x <= 9999)
	{
		if((x % 10) > ((x / 10) % 10))
		{
			result = (x % 10) * ((x / 100) % 10);
			printf("%d\n", result);	
		}
		else
		{
			printf("1\n");
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}
}
