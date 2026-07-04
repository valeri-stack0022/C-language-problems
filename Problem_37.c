#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
//
//Inchi miasin grelu depqum chi linum??
	if((d - c) == (c - b) && (c - b) == (b - a))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
