#include <stdio.h>

int main()
{
	int x = 0;
        printf("Enter four-digit number: ");
        scanf("%d", &x);
	char y;
	int k = (x % 10) + ((x / 10) % 10);

	if(x >= 1000 && x <= 9999)
	{
		if(k == 5)
		{
			y = 's';
			printf("%d\n", y);
		}
		else
		{
			y = 'd';
			printf("%d\n", y);
		}
	}
	else
	{
		printf("Wrong number! PLease try again: \n");
	}

}
