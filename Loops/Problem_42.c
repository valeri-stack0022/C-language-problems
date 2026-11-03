#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int count = 0;
    printf("Input a two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 <= 2){
        ++count;
    }

    for(int i = num1; i <= num2; ++i){
        for(int j = i; j < i + 1; ++j){
            for(int k = 2; k <= j; ++k){
                if(j % k == 0){
                    break;
                }
                if(k == j - 1){
                    ++count;
                }
            }
        }
    }
    printf("Count -> %d\n", count);

}

/*#include <stdio.h>

int main(){
    int a = 0,
    int b = 0;
    int count = 0;
    scanf("%d%d", &a, &b);
    if(a <= 2){
        count++;
    }
    for (int i = a; i <= b; i++){
        for (int j = 2; j <= i; j++){ 
            if (i % j == 0){
                break;
            }
            if (j == i - 1){
                count++;
            }
        }
    }
    printf("%d \n ", count);
}*/
