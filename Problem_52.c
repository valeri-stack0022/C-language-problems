#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x = 0;
	bool t = true;
	printf("Enter a three-digit number: ");
	scanf("%d", &x);

	if(x >= 100 && x <= 999)
	{
		printf("It's a correct number: \n");

		if((x % 10) == (x / 100) || (x % 10) == ((x / 10) % 10) || (x / 100) == ((x / 10) % 10) || ((x % 10) == (x / 100) && (x / 100) == ((x / 10) % 10)))
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
		printf("Wrong number! PLease try again: \n");
	}

	return 0;
}
