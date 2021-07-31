/*
   * Compilation :- gcc strrindex.c
   * Execution :- ./a.out
   * program  which returns the position of the rightmost occurrence of t in s , or - 1 if there is none
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */


#include<stdio.h>
#include<string.h>
int maxN=1e5;
int n=0;
int strrindex(char *s, char *t)
{
        int size1=strlen(s);//size of s
        int size2=strlen(t);//size of t
        if(size1<size2)
                return -1;// if size of t is less than s then t can never occur in s

for(int i = size1 - size2 ;i >= 0 ; --i ) // start from right and only at that position where t can fit 
{
	int k=0;
	for(int j = i; j < i + size2 ; ++j )// check if t matches any substring in s
	{
           if(s[j]==t[k])
		   k++;

	}
	if(k==size2)
	{
		return i;// if string t is found as a substring in s then index is returned
	}
}


	return -1;//if t is not found -1 is returned
}
int main()
{

    char s[maxN];
    char t[maxN];
    scanf("%s%s",s, t);
    printf("%d\n",strrindex(s,t));


}

