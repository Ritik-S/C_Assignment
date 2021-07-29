/*
   * Compilation :- gcc reverse_string.c
   * Execution :- ./a.out
   * program to reverse the given string
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
#include<string.h> 
int maxN=1e5;
int n=0;
void reverse(char *s)
{
    n = strlen(s);
    for(int i = 0 ; i < n/2 ; ++i ) {
	    // swapping characters from begining to end and vice versa to their new positions
            char temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
}
int main()
{
    char s[maxN];
    
    scanf("%[^\n]%*c",s);
    reverse(s);
    printf("%s\n",s);
     


}


