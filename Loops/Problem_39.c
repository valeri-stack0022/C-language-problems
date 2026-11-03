#include <stdio.h>

int main()
{
    int num = 0;
    int numbers = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    printf("Input a integer number; ");
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i){
        scanf("%d", &numbers);
        if(numbers > 0){
            ++count1;
        }
        else if(numbers < 0){
            ++count2;
        }
        else if(numbers == 0){
            ++count3;
        }

    }
    printf("Count of positive numbers: %d\n", count1);
    printf("Count of negative numbers: %d\n", count2);
    printf("Count of 0: %d\n", count3);
}
