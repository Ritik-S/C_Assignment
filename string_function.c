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
int min(int n, int m)
{
     if(n<m)
     return n;
     else
     return m;
}
//Strncmp function to compare  first n character of two strings
int Strncmp(char *s,char *t,int n)
{
    int n1=strlen(s);
    int n2=strlen(t);



    int idx = 0;
    while(idx<n&&idx<min(n1,n2))
    {
        // if characters are not Equal
        if(*(s+idx)!=*(t + idx))
        {
            // return ASCII value difference
            return (int)(*(s+idx) - *(t + idx));
        }
        idx++;
    }
    if(n1==n2) // if both Equal
    return 0;
    if(n1<n2) // if n2 is greater than n1
    return 1;
    else
    return -1; // if n2 is less than n1
}
//function to concatinate two strings
void Strncat(char *s, char*  t )
{
	int n = strlen(s);//length of string s
	for(int i = 0; i < (int)strlen(t) ; ++i)//adding characters of string t in front of string s
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
		for(int i = 0 ; i < (int)strlen(t) ; ++i)
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
	if(Strncmp(s,t,n) == 0)//strncmp returns 0 if strings are equal
        printf("Both Strings are equal\n");
	else if(Strncmp(s,t,n) > 0)
        printf("String 1 is larger\n");
        else
            printf("String 2 is larger\n");
        char cpy[maxN];//copy of string s
	for(int i = 0; i <(int) strlen(s) ; ++i) {
		    cpy[i]=s[i];
	    }
	printf("Concatinating %s and %s = ",s,t);
        Strncat(cpy,t);//concatinating both strings
        printf("%s\n",cpy);
        Strncpy(s,t,n);//copying n characters of t to s
	printf("Two strings after we copy n characters are : s = %s\n t = %s\n",s,t);


}
