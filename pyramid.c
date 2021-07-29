  /*
   * Compilation :- gcc pyramid.c
   * Execution :- ./a.out
   * program to print a pyramid having a given number of  steps.
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
//function to  print pyramid
void pyramid(int n)
{
    int spaces=n-1;//represent spaces which are to be initially added in each line while printing pyramid
    for(int i =1;i<=n;++i)
    {
	    for(int j = 0 ; j < spaces ; ++j)
	    {
		    printf(" "); 
	    }
	    for(int j=0;j<i;++j)
	    {
		    printf("# ");
	    }
	    printf("\n");
	    spaces--;
    }
}
int main()
{
    int n ;
    printf("n = ");
    scanf("%d",&n);
    pyramid(n);
}
