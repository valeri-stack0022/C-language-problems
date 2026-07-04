#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if((a % 2 == 0) || (b % 2 == 0) || (c % 2 == 0))
	{
		printf("1");
	}
	else
	{
		printf("2");
	}
	return (0);
}
