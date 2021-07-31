/*
   * Compilation :- gcc any.c
   * Execution :- ./a.out
   * program which returns the first location in the string1 where any character from the string2 occurs
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include<stdio.h>
#include<string.h> 
int maxN =1e5;
//function to set value at every index of array to 0
void clear_everything(int f[])
{
    for(int i=0;i<26;++i) 
		f[i]=0;
}
int any(char *s1, char *s2)
{
  
    int frequency_t[26];//used to store frequency of each character
    int n=strlen(s1);
    int m=strlen(s2);
    clear_everything(frequency_t);//sets value of this array to 0

    for(int i =0;i<m;++i)
      {
           frequency_t[s2[i]-'a']++;//counting frequency of every character
      }


    for(int i =0;i<n;++i)
      {
           if(frequency_t[s1[i]-'a'])//if any characters occurs then this index is returned
            {
                    return i;
	    }
      }

      return -1;    //if no such character matches it return -1


}



int main()
{
    char s[maxN],t[maxN];
    scanf("%s %s",s, t);
    int answer = any(s,t);
    printf("%d\n",answer);
}
