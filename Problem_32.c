#include <stdio.h>

int main()
{
        int a = 0, b = 0, c = 0, d = 0;
        printf("Enter four numbers: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

	if(a == b && b == c && c == d)
		printf("%d", a);
        if((a < b && a < c && a < d) || (a == d && a < b && a < c) || (a < b && a == c && a < d) || (a == b && a < c && a < d) || (a == b && a == c && a < d) || (a < b && a == c && a == d))
                printf("%d", a);
        if((b < a && b < c && b < d) || (b < a && b == c && b < d) || (b < a && b < c && b == d) || (b < a && b == c && c == d))
                printf("%d", b);
        if((c < a && c < b && c < d) || (c < a && c < b && c == d))
                printf("%d", c);
        if(d < a && d < b && d < c)
                printf("%d", d);
        printf("\n");

        return 0;
}

