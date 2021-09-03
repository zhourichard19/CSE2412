/*Richard Zhou*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <time.h>

/*main method which reads for 8 character one at a time. This then encrypts those characters until there are no more characters left. When there are less than 8 characters left in the file,the program just prints outthe characters in the end of the output file.*/
int main(){

        /*declares all of the needed variables*/
        int size,  i =0,  j = 0,x,k;
        char buffer[DIGITS];
        unsigned char c;
	clock_t start, end;
	double cpu_time_used;
	
	start = clock();	

        /*while loop which reads a file 8 characters at a time until the file is empty*/
        while((x = getchar()) != EOF){
                /*checks to see how many characters have been read and if it is 8, then the encryption begins*/
                if(i >= DIGITS){
                        encrypt(buffer);
                        i = 0;
                }

                /*sets the int read from the file to character*/
                c = x;
                /*puts the character in an array to be encrypted*/
                buffer[i] = c;
                /*raises the counter*/
                i++;
        }

        /*prints out the extra characters in the file*/
        for(j = 0; j < i; j++){
                putchar(buffer[j]);
        }

	end = clock();
	cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;
	printf("%d",cpu_time_used);
        /*ends the executable*/
        return 0;
}

