#include <stdio.h>
 
 int main()
 {
     int num;
     printf("Input a integer number: ");
     scanf("%d", &num);
     int num1 = num;
 
     if(num <= 99){
         printf("No");
         printf("\n");
     }
     if(num > 99){
     int d1 = 0;
     int d2 = 0;
     d1 = num % 10;
     num = num / 10;
     d2 = num % 10;
     int qanord = d1 / d2;
         while(num){
             d1 = d2;
             num /= 10;
             if(num == 0){
                 printf("Yes\n");
             }
             d2 = num % 10;
             if(num != 0){
                 if(d1 / d2 != qanord){
                     printf("No\n");
                     return 0;
                 }
             }
         }
     }
     return 0;
 }

