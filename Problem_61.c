#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 0;
	bool t = true;
	printf("Enter four-digit number: ");
	scanf("%d", &x);

	if(x >= 1000 && x <= 9999)
	{
		if(((x % 10) + ((x / 10) % 10)) == ((x / 1000) + ((x / 100) % 10)))
		{
			t = true;
			printf("%d\n", t);
		}
		else
		{
			t = false;
			printf("%d\n", t);
		}
	}
	else
	{
		printf("Wrong number! Please try again: \n");
	}
}
