#include <stdio.h>

int main()
{
	unsigned char age = 0;
	printf("Enter your age: ");
	scanf("%hhd", &age);
	printf("You are %d years old.", age);

	return 0;
	
}
