//Fibonachi index

#include <stdio.h>

int main()
{
    int index = 0;
    int left = 0;
    int right = 1;
    int sum = 0;
    
   do{
        printf("Input a NOT Negative integer  number: ");
        scanf("%d", &index);

    }while(index < 0);

   if(index == 0){
        printf("Number = %d\n", index);
   }
   else if(index == 1){
        printf("Number = %d\n", index);
   }

   while(index > 1){
        sum = left + right;
        left = right;
        right = sum;
        --index;
   }
   printf("%d\n", sum);

   return 0;


    
}
