#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a integer number: ");
    scanf("%d", &num);

    int result = 1;
    for(int i = num; i > 0; --i){
        result = result * i;
    }
    if(num == 0){
        printf("Factorial -> 1\n");
    }
    else{
    printf("Factorial -> %d\n", result);
    }

    return 0;
    
}
