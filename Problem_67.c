#include <stdio.h>

int main()
{
	int x;
	printf("Enter four-digit number: ");
	scanf("%d", &x);
	int k = ((x % 10) + ((x / 10) % 10) + ((x / 100) % 10) + (x / 1000)) * ((x % 10) + ((x / 10) % 10) + ((x / 100) % 10) + (x / 1000)) ;

	if(x >= 1000 && x <= 9999)
	{
		if(x == k)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	else
	{
		printf("Wrong number! PLease try again:\n");
	}
}
