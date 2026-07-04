#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 0;
        printf("Enter four-digit number: ");
        scanf("%d", &x);
	bool t = true;

	if(x >= 1000 && x <= 9999)
	{
		if((x % 10 == 1) || ((x / 10) % 10) == 1 || ((x / 100) / 10 == 1) || (x / 1000 == 1) )
		{
			t = true;
			printf("%d\n", t);
		}
		else
		{
			t = false;
			printf("%d\n", t);		}
	}
	else
	{
		printf("Wrong number! PLease try again: \n");
	}

}
