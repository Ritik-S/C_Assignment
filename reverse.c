


 /*
   * Compilation :- gcc reverse.c
   * Execution :- ./a.out
   * program to reverse the given array
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
int maxN=5;
//function to swap two numbers
void swap(int *a ,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a= *a-*b;
}
// function to reverse the array
void reverse(int *a)
{
    for(int i =0;i<maxN/2;++i)
       {
	       //reverses the array by swapping elements from start and end
		swap(&a[i],&a[maxN-i-1]);
       }
}
int main()
{
    int a[maxN];
    printf("Enter values to the array:");

    for(int i =0;i<5;++i)
       {
	    scanf("%d",&a[i]);
       }

    reverse(a);

    for(int i =0;i<5;++i)
       {
            printf("%d ",a[i]);
       }


}

