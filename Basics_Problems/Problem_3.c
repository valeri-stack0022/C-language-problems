#include <stdio.h>

int main()
{
	long long int x = 0;
	printf("Enter your number: ");
	scanf("%lld", &x);
	printf("Total: %lld\n", 4 * x + 21 * x * x - 12);

	return 0;
}
