#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a == 0 || b == 0 || c == 0)
	{
		printf("Error!, Used zero!");
	}	
	if(a/b == b/c) printf("1\n");
	else printf("0\n");
	return 0;
}
