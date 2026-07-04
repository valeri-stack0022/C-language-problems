
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	if(((a + b) > c) && ((a + c) > b) && ((b + c) > a))
	{
		printf("y = 1");
	}
	else
	{
		printf("y = 2");
	}
}
