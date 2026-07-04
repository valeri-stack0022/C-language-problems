#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a == 2 && c == 2)
	{
		printf("true");
	}
	else if(a == 2 && b == 2)
	{
		printf("true");
	}
	else if(b == 2 && c == 2)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return (0);
}
