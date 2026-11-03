#include <stdio.h>

int main()
{
    int num;
    printf("Input a integer number: ");
    scanf("%d", &num);

    if(num <= 99){
        printf("No");
        printf("\n");
    }
    if(num > 99){
    int d1 = 0;
    int d2 = 0;
    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    int dif = d1 - d2;
        while(num){
            d1 = d2;
            num /= 10;
            if(num == 0){
                printf("Yes\n");
            }
            d2 = num % 10;
            if(num != 0){
                if(d1 - d2 != dif){
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    return 0;
}

/* int main() {
     int n;
     scanf("%d", &n);
     if (n <= 99) {
         printf("no\n");
         return 0;
     } ///6578
     int d1 = n % 10; //d1 = 8
     n /= 10; //n = 657
     int d2 = n % 10; //d2 = 7
     n /= 10;
     int dif = d1 - d2;
     while (n) {
         d1 = d2; // d1 = 7
         d2 = n % 10; // d2 = 5
         if (d1 - d2 != dif) {
             printf("no\n");
             return 0;
         }
         n /= 10;
     }
     printf("yes\n");
 }*/


