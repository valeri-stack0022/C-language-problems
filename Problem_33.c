#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if(a == 1 || b == 1 || c == 1 || d == 1)
	{
		printf("true");
	}	
	else
	{
		printf("false");
	}
}
