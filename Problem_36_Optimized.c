#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	float number1 = (a % 2 == b % 2 != 0) ? printf("1") : printf("2");
	float number2 = (a % 2 == c % 2 != 0) ? printf("1") : printf("2");
	float number3 = (a % 2 == d % 2 != 0) ? printf("1") : printf("2");
	float number4 = (b % 2 == c % 2 != 0) ? printf("1") : printf("2");
	float number5 = (b % 2 == d % 2 != 0) ? printf("1") : printf("2");
	float number6 = (c % 2 == d % 2 != 0) ? printf("1") : printf("2");

	printf("\n");
	return 0;
}
