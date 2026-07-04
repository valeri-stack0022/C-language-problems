#include <stdio.h>

int main()
{
	int x;
	printf("Enter four-digit number: ");
	scanf("%d", &x);
	int k = (x % 10) * ((x / 10) % 10);

	if(x >= 1000 && x <= 9999)
	{
		if(k == 12)
		{
			printf("y = 12\n");
		}
		else
		{
			printf("y = 0\n");
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}
}
