
/*
   * Compilation :- gcc string_function.c
   * Execution :- ./a.out
   * program to implement strncpy, strncat, and strncmp
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include<stdio.h> 
#include<string.h>
int maxN=1e5;
//Strncmp function to compare two strings if they are equal or not
int Strncmp(char *s , char *t)
{
	if(strlen(s) != strlen(t))// if length of the given two string is not equal they can never be equal 
	{
		return 1;
	}
	for(int i = 0 ; i < strlen(s) ; ++i)
	{
	      if(s[i] != t[i])//if any character doesn't match return -1
	   	return 1;
	}
	return 0;//returns 0 if strings are equal
}
//function to concatinate two strings
void Strncat(char *s, char*  t )
{
	int n = strlen(s);//length of string s
	for(int i = 0; i < strlen(t) ; ++i)//adding characters of string t in front of string s
	{
		s[n] = t[i];
		n++;//increasing length of string s while we are adding characters of t to it
	}
}
//function to copy first n characters of string t to string n 
void Strncpy (char *s, char*  t , size_t n)
{
	if(strlen(t) < n)//if n is greater than length of string then copy all characters of string t
	{
		for(int i = 0 ; i < strlen(t) ; ++i)
		{
			s[i] = t[i];
		}
	         
	}
	else 
	{

            for(int i = 0 ; i < n ; ++i)//simply copying n characters to string s
                {
                        s[i] = t[i];
                }
                

	}

}
int main()
{
	char s[maxN];
	char t[maxN];
	int n;
        printf("Enter n = ");
	scanf("%d",&n);
	    



	printf("Enter two strings : ");
	scanf("%s %s",s,t);
	if(Strncmp(s,t) == 0)//strncmp returns 0 if strings are equal
           printf("Both Strings are equal\n");
	else
           printf("Both Strings are not equal\n");
        char cpy[maxN];//copy of string s
	for(int i = 0; i < strlen(s) ; ++i) {
		    cpy[i]=s[i];
	    }
	printf("Concatinating %s and %s = ",s,t);
        Strncat(cpy,t);//concatinating both strings
        printf("%s\n",cpy);
        Strncpy(s,t,n);//copying n characters of t to s
	printf("Two strings after we copy n characters are : s = %s\n t = %s\n",s,t);
	

}
