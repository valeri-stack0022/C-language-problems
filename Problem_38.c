#include <stdio.h>

int main()
{
	float a = 0, b = 0, c = 0, d = 0;
        printf("Enter four numbers: ");

	// if-y chi ashxatum, chgitem inchi
	if(scanf("%f %f %f %f", &a, &b, &c, &d) > 4)
	{
		printf("Invalide input!");
	}

//mnacacy ashxatum e	
	if(a == 0 || b == 0 || c == 0 || d == 0)
	{
		printf("Error!, Don't write zero!\n");
	}
	if((a / b == b / c) && (b / c && c / d))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	printf("\n");

	return (0);

}
