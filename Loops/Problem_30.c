#include <stdio.h>

int main()
{
   int num = 0;
   printf("Input a positive integer number: ");
   scanf("%d", &num);
   int num1 = num;
   
   int div = 1;
   if(num >= 16){
        num = num / 16;
        div = div * 16;
    }
    
    int group = 0;
    while(div){
        group = num1 / div;
        if(group > 9){
            if(group == 10){
                group = 'A';
                printf("%c", group);
            }
            else if(group == 11){
                group = 'B';
                printf("%c", group);
            }
            else if(group == 12){
                group = 'C';
                printf("%c", group);
            }
            else if(group == 13){
                group = 'D';
                printf("%c", group);
            }
            else if(group == 14){
                group = 'E';
                printf("%c", group);
            }
            else if(group == 15){
                group = 'F';
                printf("%c", group);
            }
        }
        else{
            printf("%d", group);
        }

        num1 = num1 % 10;
        div /= 16;
    }
    printf("\n");
    return 0;

}
