#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a < c && a < b)
	{
		printf("%d", a);
	}
	if(b < a && b < c)
	{
		printf("%d", b);
	}
	if(c < a && c < b)
	{
		printf("%d", c);
	}
	return (0);
}
