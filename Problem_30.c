#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if((c > b) && (b > a))
	{
		printf("%d %d %d", c, b, a);
	}
	else if((c > a) && (a > b))
	{
		printf("%d %d %d", c, a, b);
	}
	else if((b > c) && (c > a))
	{
		printf("%d %d %d", b, c, a);
	}
	else if((b > a) && (a > c))
	{
		printf("%d %d %d", b, a, c);
	}
	else if((a > c) && (c > b))
	{
		printf("%d %d %d", a, c, b);
	}
	else if((a > b) && (b > c))
	{
		printf("%d %d %d", a, b, c);
	}

	printf("\n");

	return (0);
}
