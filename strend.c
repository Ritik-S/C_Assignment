/*
   * Compilation :- gcc strend.c
   * Execution :- ./a.out
   * program which returns 1 if the string t occurs at the end of the string s, and zero otherwise 
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
#include<string.h>
int maxN=1e5;
int n=0;
int strend(char *s, char *t)
{
    	int size1=strlen(s);
	int size2=strlen(t);
	if(size1<size2)
		return 0;
	
	while(size2!=-1)
	{
		if(s[size1]==t[size2])
		{
			size1--;
			size2--;
		}
		else
			return 0;
	}
	return 1; 
}
int main()
{

    char s[maxN];
    char t[maxN];
    scanf("%s%s",s, t);
    printf("%d\n",strend(s,t));


}

