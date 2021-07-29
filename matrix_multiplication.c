

 /*
   * Compilation :- gcc matrix_multiplication.c
   * Execution :- ./a.out
   * program to multiply two matrices
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include<stdio.h> 

int main()
{
    int size;    
    printf("Enter size : ");
    scanf("%d", &size);
    printf("Matrix 1 = ");
    int matrix1[size+1][size+1],matrix2[size+1][size+1];//giving extra space to prevent any kind of overflow
    int answer[size+1][size+1];
    //input matrix1
    for(int i = 0 ; i < size ; ++i)
    {
	    for(int j = 0; j < size; ++j)
	    {
		    scanf("%d" , &matrix1[i][j]);
		    answer[i][j] = 0;//initialize answer matrix with value 0
	    }
    }
    printf("Matrix 2 = ");
    // input matrix2
    for(int i = 0;i < size ; ++i)
    {
            for(int j = 0; j < size; ++j)
            {
                    scanf("%d" , &matrix2[i][j]);
                    
            }
    
    
    }


    // answer matrix is the final matrix made after multiplication of matrix1 and matrix2
    for(int i = 0; i < size ; ++i)
    {
	    for( int  j = 0; j < size ; ++j)
	    {
               for(int pos = 0 ; pos < size; ++pos)
	       {
		       answer[i][j] += matrix1[i][pos] * matrix2[pos][j];
	       }
	    }
    }
    for(int i =0;i< size ;++i)
    {
            for(int j = 0; j< size; ++j)
            {
                    printf("%d ", answer[i][j]);
            }
	    printf("\n");
    }


      
}

