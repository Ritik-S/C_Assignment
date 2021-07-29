
/*
   * Compilation :- gcc reverse_polish.c
   * Execution :- ./a.out
   * program to reverse given polish expression
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int maxN=1000;
//stack
int st[1000];
//points to the top element of the stack
int index_=-1;
//return top of stack
int top()
{
    return st[index_];
}
// push to the top of stack
void push(int x)
{
    index_++;
    if(index_==maxN)
    return;
    st[index_]=x;
}
//pop the top of stack
void pop()
{
    if(index_==-1)
    return ;
    index_--;
}



int main()
{
	int tokens;
	printf("Enter total number of tokens : ");
	scanf("%d",&tokens);
	for(int tc=0;tc<tokens;++tc)
	{
		char cur_token[maxN];
		scanf("%s",cur_token);


		  
          
                //check for + operator
                if(strcmp(cur_token,"+")==0)
                {
			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        //adds top two values
		        int new_value= no1 + no2;	
                        push((new_value));
                }
		// check for - operator
		else if(strcmp(cur_token,"-")==0)
                {    

			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        //subtracts top two values
			int new_value=no2 - no1;
                        push(new_value);
                }
		// check for * operator
		else  if(strcmp(cur_token,"*")==0)
                {     
			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        //multiplies top two values 
                        int new_value=no2 * no1;
                        push(new_value);

                }
		//check for / operator
		else if(strcmp(cur_token,"/")==0)
                {     
		        int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        // divide top two values
                        int new_value = no2 / no1;
                        push(new_value);


                }
            
            else
            {
		       //string to integer
                       int top_value = atoi(cur_token);
                       push(top_value);
            }
	}
	    //answer represents final value
	    int answer=top();
	    pop();
	    printf("%d\n",answer);

	
            return 0;

}
