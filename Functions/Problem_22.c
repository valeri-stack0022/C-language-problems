#include <stdio.h>

int Count_One(int num)
{
    int count = 0;
    while(num){
        if(num & 1){
            ++count;
        }
        num = num >> 1;
    }
    return count;
}

/*int main()
{
    int num = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);
    printf("%d\n", Count_One(num));


}*/
