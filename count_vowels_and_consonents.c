/*
   * Compilation :- gcc count_vowels_and_consonents.c
   * Execution :- ./a.out
   * program to count vowels and consonents in a given string
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
int maxN=1e5; 

int main()
{
    char  s[maxN];
    scanf("%[^\n]%*c" , s );
    int vowel = 0 , consonents = 0;//count of vowels and consonents
    for(int i = 0;i < maxN; ++i )
    {
	    if(s[i] >= 'A' && s[i] <= 'Z')//converting everything in the string to lowercase
	    {
		    s[i] -= 'A';
		    s[i] += 'a';
	    }
	    else if(s[i] == '\0')
		    break; 
    }
    for(int i = 0;i < maxN;++i)
	    {
		    // this if condition check for vowels
		    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' )
			    vowel++;
		    
                    else if(s[i]=='\0')
			    break; 

		    else consonents++;

                       
	    }
    printf("Vowels= %d Consonents= %d\n",vowel, consonents);
}

