#include <stdio.h>

int main()
{
	int x;
        printf("Enter four-digit number: ");
        scanf("%d", &x);

	if(x >= 1000 && x <= 9999)
	{
		if((x % 10) == 4 || (x / 1000) == 4 || ((x % 10) == 4 && ((x / 1000) == 4)))
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
		printf("Wrong number! Please try again: \n");
	}

}
