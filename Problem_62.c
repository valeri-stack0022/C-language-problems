#include <stdio.h>

int main()
{
	int x = 0;
        printf("Enter four-digit number: ");
        scanf("%d", &x);
	float k = 0;
	float result;

        if((x >= 1000 && x <= 9999) && ((x % 10) + ((x / 100) % 10) != 0))
        {
		if(x < 5000)
		{
			k = (x % 10) + ((x / 100) % 10);
			result  = (float)x / k;
			printf("%.2f", result);	
		}
		else
		{
			k = (x / 1000) + ((x / 10) % 10);
			result = (float)x / k;
			printf("%.2f", result);
		}
	}
	else
	{
		printf("Wrong number or (First(digit) + third(digit) == 0)! Please try again:  \n");
	}

}
