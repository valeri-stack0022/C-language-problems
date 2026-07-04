#include <stdio.h>

int main()
{
	int x;
	printf("Enter a four-digit number: ");
	scanf("%d", &x);
	int y;
	int k = ((x % 10) * ((x / 10) % 10) * ((x / 100) % 10) * (x / 1000));

	if(x >= 1000 && x <= 9999)
	{
		if(k > 200)
		{
			y = 0;
			printf("%d\n", y);
		}
		else
		{
			y = 1;
			printf("%d\n", y);
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}
}
