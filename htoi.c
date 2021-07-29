/*
   * Compilation :- gcc htoi.c
   * Execution :- ./a.out
   * program to implement htoi function
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include<stdio.h> 
#include<string.h>
int maxN =1e5;
int hexa_value[26];//stores hexadecimal value from a to f
int htoi(char *s)
{

	int len = strlen(s);
	int answer = 0;//represents final hexadecimal value

	for(int i = 0 ; i < len; ++i)
	{
		if(len >= 2 && i == 0 && s[i] == '0' && s[i+1] == 'x')
		{
			i += 1;
			continue;
		}
	        if(s[i] >= '0' && s[i] <= '9')//calculates answer for numbers
			answer = answer * 16 + (int) (s[i] - '0');
		if(s[i] >= 'a' && s[i] <= 'f')//calculates answer for characters
                        answer = answer * 16 + hexa_value[s[i] - 'a'];


	}
	return answer; 
}
void convert_lowercase(char *s)
{
	int len = strlen(s);
	for(int i = 0;i < len ; ++i)//converts to lowercase
	{
		if(s[i] >= 'A' && s[i] <='Z')
		{
			s[i]-='A';
			s[i]+='a';
		}
	}
}
int main()
{
	char s[maxN]; 
	scanf("%s", s);
	convert_lowercase(s);
	// some precomputations are done here which are needed for htoi to work properly
	for(char ch = 'a' ; ch <= 'f'; ++ch)
	{
		hexa_value[ch - 'a'] = 10 + (int) (ch - 'a');//basically the idea is to store hexadecmal value for each character from a to f.
	}

 	int hexa_code = htoi(s);
	printf("%d\n",hexa_code);

}
