
/*
   * Compilation :- gcc squeeze.c
   * Execution :- ./a.out
   * program to delete each character in s1 that matches any character in string s2
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include<stdio.h>
#include<string.h> 
int maxN =1e5;
//function to set value at every index of array to 0
void clear_everything(int f[])
{
    for(int i = 0; i < 26; ++i) 
		f[i] = 0;
}
void squeeze(char *s1, char *s2)
{
  
    int frequency_t[26];//used to store frequency of each character
    int n = strlen(s1);
    int m = strlen(s2);
    clear_everything(frequency_t);//sets value of this array to 0

    for(int i =0;i<m;++i)
      {
           frequency_t[s2[i]-'a']++;//counting frequency of every character
      }

    char answer[maxN];
    int limit=0;//represent the final size of final string

    for(int i =0;i<n;++i)
      {
           if(!frequency_t[s1[i]-'a'])//check if the character occur in second string
            {
                    answer[limit] = s1[i];
                    limit++ ;
	    }
      }

    s1[limit]='\0';

    for(int i = 0;i < limit; ++i)
           s1[i] = answer[i];




}



int main()
{
    char s[maxN],t[maxN];
    scanf("%s %s",s, t);
    squeeze(s,t);
    printf("%s\n",s);

}

