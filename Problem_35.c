#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if((a == b + c + d) || (b == a + c + d) || (c == a + b + d) || (d = a + b + c))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return 0;
}
