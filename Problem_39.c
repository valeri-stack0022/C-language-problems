#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("Enter four numbers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//a
	if(a <= b && b <= c && c <= d)
		printf("%d %d %d %d", a,b,c,d);
	else if(a <= b && b <= d && d <= c)
		printf("%d %d %d %d", a,b,d,c);
	else if(a <= c && c <= b && b <= d)
		printf("%d %d %d %d", a,c,b,d);
	else if(a <= c && c <= b && d <= b)
		printf("%d %d %d %d", a,c,d,b);
	else if(a <= d && d <= b && b <= c)
		printf("%d %d %d %d", a,d,b,c);
	else if(a <= d && d <= c && c <= b)
		printf("%d %d %d %d", a,d,c,b);	
	//b
	else if(b <= a && a <= c && c <= d)
		printf("%d %d %d %d", b,a,c,d);
	else if(b <= a && a <= d && d <= c)
		printf("%d %d %d %d", b,a,d,c);
	else if(b <= c && c <= a && a <= d)
		printf("%d %d %d %d", b,c,a,d);
	else if(b <= c && c <= d && d <= a)
		printf("%d %d %d %d", b,c,d,a);
	else if(b <= d && d <= c && c <= a)
		printf("%d %d %d %d", b,d,c,a);
	else if(b <= d && d <= a && a <= c)
		printf("%d %d %d %d", b,d,a,c);
	//c
	else if(c <= a && a <= b && b <= d)
		printf("%d %d %d %d", c,a,b,d);
	else if(c <= a && a <= d && d <= b)
		printf("%d %d %d %d", c,a,d,b);
	else if(c <= b && b <= a && a <= d)
		printf("%d %d %d %d", c,b,a,d);
	else if(c <= b && b <= d && d <= a)
		printf("%d %d %d %d", c,b,d,a);
	else if(c <= d && d <= a && a <= b)
		printf("%d %d %d %d", c,d,a,b);
	else if(c <= d && d <= b && b <= a)
                printf("%d %d %d %d", c,d,b,a);
	//d
	else if(d <= a && a <= b && b <= c)
		printf("%d %d %d %d", d,a,b,c);
	else if(d <= a && a <= c && c <= b)
                printf("%d %d %d %d", d,a,c,b);
	else if(d <= b && b <= a && a <= c)
                printf("%d %d %d %d", d,b,a,c);
	else if(d <= b && b <= c && c <= a)
                printf("%d %d %d %d", d,b,c,a);
	else if(d <= c && c <= b && b <= a)
                printf("%d %d %d %d", d,c,b,a);
	else if(d <= c && c <= a && a <= b)
                printf("%d %d %d %d", d,c,a,b);

	printf("\n");
	return 0;





}












