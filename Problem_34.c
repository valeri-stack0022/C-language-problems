#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter fout numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if((a + b == c + d) || (a + c == b + d) || (b + c == a + d) || (b + d == a + c))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return (0);
}
