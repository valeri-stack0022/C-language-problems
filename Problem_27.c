#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a < b) && (b < c))
	{
		if((c - b) == (b - a))
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	if((c < b) && (b < a))
	{
		if((a - b) == (b - c))
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	if((a < c) && (c < b))
	{
		if((b - c) == (c - a))
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
	}
	return 0;
}
