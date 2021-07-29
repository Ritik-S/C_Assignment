/*
   * Compilation :- gcc swap.c
   * Execution :- ./a.out
   * program to swap two numbers
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
//function to swap two numbers parameters are two numbers which we need to swap
void swap_numbers(int *number1, int *number2)
{
    int temporary = *number1;
    *number1 = *number2;
    *number2 = temporary;


}
int main()
{
    int number1,number2;
    
    printf(" a = ");
    scanf("%d",&number1);
    printf(" b = ");
    scanf("%d",&number2);
    printf("Numbers before swap are: a = %d b = %d\n", number1 , number2);
    swap_numbers( &number1 , &number2 );
    printf("Numbers after swap are: a = %d b = %d\n", number1 , number2);
}
