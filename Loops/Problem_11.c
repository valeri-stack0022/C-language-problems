#include <stdio.h>

/*int main();
{
    int num;
    int i = 1;
    int result = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);
    
    for(int i = num; i > 3; --i){
        result = num % 10;
        num = num / 10;
        printf("%d", result);
   }
    printf("%d", i );
    printf("\n");
}*/

int main()
{
    int num; 
    int result = 1;
    printf("Input a integer number: ");
    scanf("%d", &num);
    while(num > 0){
        result = num % 10;
        num = num / 10;
        printf("%d", result);
    }
    printf("\n");
   
    return 0;

}
