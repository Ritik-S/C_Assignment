/*
   * Compilation :- gcc palindrome.c
   * Execution :- ./a.out
   * program to check if the given string is palindrome or not
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
int maxN =1e5;// max size of string 

// function to check if string is palindrome or not paramters->(input string , size)
int  is_palindrome(char *s ,int n)
{
    //matches characters from start and end 
    for(int i = 0;i < n/2 ; ++i) {

		if(s[i] != s[n-i-1])
		return 0; 
	}

    return 1; 
}
int main()
{
    char str[maxN]; 

    scanf("%[^\n]%*c",str);

    int N = 0;

    while( str[N] != '\0')
       {  
	    N++;//counts the size of given string
       }

    char s[N];

    int n = 0;
    
    for(int i = 0;i < N; ++i)
    {
          if(str[i] >= 'A' && str[i] <= 'Z')//converts the current to lowercase 
           
	    {
         	str[i] -= 'A';
	        str[i] += 'a';

            }   
	  if(str[i] >= 'a' && str[i] <= 'z')//removing spaces
	  {
		  s[n] = str[i];
		  n++;
	  }
    }
    
    if( is_palindrome(s , n ))  printf("true\n");

    else printf("false\n");





}

