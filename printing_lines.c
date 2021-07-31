
/*
   * Compilation :- gcc printing_lines.c
   * Execution :- ./a.out
   * program to print those lines which are longer than 80 characters
   * @Ritik , 1910990138 , 23/7/2021
   * Assignment 1-C
   */
#include <stdio.h>
int maxN=1e5;
//function to read file and print those characters which are longer than 80 characters
void file_reader()
{
	// A pointer to file
        FILE *fptr;
	//opening input.txt file
        fptr = fopen("input.txt","r");
        if (fptr == NULL) {

        printf("unable to  open file \n");
        return ;

        }
        char c;
        int position = 0;
	char text[maxN];
        //reading file character by character
        while ((c =fgetc(fptr )) != EOF) {

	      //if it is simple character than we add it to our string	
              if (c != '\n') {

               text[position] = c;
               ++position;
               continue;
               }

              //if character read by fgetc function is '\0' then it will print this line and start storing new line 
              text[position] = '\0';
	      // if line has more than 80 characters
              if (position >= 80)
              printf("%s\n", text);
              position = 0;

         }   

}
int main() {

        file_reader();
        return 0;
}

