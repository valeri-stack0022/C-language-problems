#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if((a % 2 != 0) && (b % 2 != 0))
		printf("1");
	else if((a % 2 != 0) && (c % 2 != 0))
		printf("1");
	else if((a % 2 != 0) && (d % 2 != 0))
		printf("1");
        else if((b % 2 != 0) && (c % 2 != 0))
                printf("1");
        else if((b % 2 != 0) && (d % 2 != 0))
                printf("1");
        else if((c % 2 != 0) && (b % 2 != 0))
                printf("1");
        else if((c % 2 != 0) && (d % 2 != 0))
                printf("1");
	else
		printf("2"):

	return (0);
}
