#include <stdio.h>

int main()
{
    int num = 0;
    int d1 = 0;
    int d2 = 0;
    int sum = 0;
        for(int i = 10; i <= 99; ++i){
            num = i;;
            while(num){
                d1 = num % 10;
                num /= 10;
                d2 = num % 10;
                sum = d1 + d2;
                if(sum == 10 && d2 > d1){
                    printf("Result -> %d\n", i);
                }
            }
        }
        return 0;
}
