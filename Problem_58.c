#include <stdio.h>

int main()
{
	int x = 0;
	printf("Enter three-digit number: ");
	scanf("%d", &x);
	char t;

	if(x >= 100 && x <= 999)
	{
		if((((x / 10) % 10) + (x / 100)) < 5)
		{
			t = 'a';
			printf("%d\n", t);
		}
		else
		{
			t = 'b';
			printf("%d\n", t);
		}
	}
	else
	{
		printf("Wrong number! PLease try again: \n");
	}

}
