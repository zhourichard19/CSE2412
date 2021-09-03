/*Richard Zhou*/

/*declare functions*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

/*creataes an array to beencrypted*/
int main(){
	
	/*declare variables*/
	int size;
	int i=0;
	int j = 0;
	int x;
	char buffer[DIGITS];
	unsigned char c;
	/*read file*/
	while((x = getchar()) != EOF){
		c = x;
		buffer[i] = c;
		i++;
		/*checks to see if array had 7*/
		if(i >= DIGITS){
			/*ENCRYPTING*/
			badEncrypt(buffer);
			i = 0;
			/*sets array to 0 for reset*/
			memset(buffer,0,sizeof(buffer));
			/*go through while loop again*/
			if(buffer[i] =0)
				break;
		}	
	}
	for(j = 0; j< i; j++){
		/*prints outextra characters*/
		putchar(buffer[j]);
		/*goes to stop*/
		if(j == 7)
			 goto stop;
		if(j == 8)
			continue;}
	stop:
	return 0;
}
