#include <stdio.h>

int Sqrt(int num)
{
    for(int i = 0; i < num / 2; ++i){
        if(i * i == num){
            return i;
        }
            else{
                continue;
            }
    }
}

int main()
{
    int num = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);
    printf("%d \n", Sqrt(num));
}
