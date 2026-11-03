#include <stdio.h>

/*int main()
{
     int n;
     scanf("%d", &n);
     int col = n*2 - 1;
     int mid = col / 2;
     for (int i = 0; i < n-1; ++i) {
         for (int j = 0; j < col; ++j) {
             if (mid + i == j || mid - i == j) {
                 printf("*");
             } else {
                 printf(" ");
             }
         }
         printf("\n");
     }
     for (int i = 0; i < n; ++i) {
         printf("* ");
     }
     printf("\n");
}*/

int main()
{
    int num = 0;
    printf("Input a integer number: ");
    scanf("%d", &num);

    int Jvalue = num * 2 - 1;
    int middle = Jvalue / 2;

    for(int i = 0; i < num - 1; ++i){
        for(int j = 0; j < Jvalue; ++j){ 
            if(middle + i == j || middle - i == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 0; i < num; ++i){
        printf("* ");
    }
    printf("\n");
}

