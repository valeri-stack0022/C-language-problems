#include <stdio.h>

int main()
{
    short int total_schoolchild_count;
    short int classroom1;
    short int classroom2;
    short int classroom3;
    short int classroom4; 
    short int classroom5;
    short int classroom6;
    short int classroom7;  
    short int classroom8;
    short int classroom9;
    short int classroom10;
    short int classroom11;
    short int classroom12;
    printf("Enter all count schoolchildren: ");
    scanf("%hd", &total_schoolchild_count); 
    printf("Enter any class schoolchildren count: ");
    scanf("%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd %hd", &classroom1, &classroom2, &classroom3, &classroom4, &classroom5, &classroom6, &classroom7, &classroom8, &classroom9, &classroom10, &classroom11, &classroom12);

    printf("Count class: %d\n", total_schoolchild_count / ((classroom1 + classroom2 + classroom3 + classroom4 + classroom5 + classroom6 + classroom7 + classroom8 + classroom9 + classroom10 + classroom11 + classroom12) / 12));

    return 0;
}
