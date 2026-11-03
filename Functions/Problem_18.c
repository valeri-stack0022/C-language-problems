#include <stdio.h>

int Pythagoras(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    int max = arr[0];
    for(int i = 0; i < 3; ++i){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    if((max * max) == ((a * a) + (b * b)) || (max * max) == ((a * a) + (c * c)) || (max * max) == ((b * b) + (c * c))){
        return 1;
    }
    else{
        return 0;
    }
}

/*int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    do{
        printf("Input natural numbers for triangle sides: ");
        scanf("%d %d %d", &a, &b, &c);
    }while(a <= 0 || b <= 0 || c <= 0);

    if((a >= b + c) || (b >= a + c) || (c >= a + b)){
        printf("It's not triangle!\n");
    }
    else{
        printf("It's a valid triangle sides:\n");
    }
    if(Pythagoras(a, b, c)){
        printf("It's a right-triangle:\n");
    }
    else{
        printf("It's not right-triangle:\n");
    }
}*/
