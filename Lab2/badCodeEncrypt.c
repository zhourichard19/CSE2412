/*Richard Zhou*/

/*declares functions used inside of the method*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*the best way to encrypt*/
void badEncrypt(char buffer[]){
	/*declare variables*/
	unsigned char new;
	unsigned char temp;
	unsigned char key;
	unsigned char ch;
	int i =0;
	/*loops through and encrypts the characters */
	for(i = 0;i<DIGITS;i++){
	/*sets the char equal to the partin array*/
ch = buffer[i];
key = buffer[7];
/*does some bitshiftsto encrypt*/
temp = (key>> i) <<7;
/*ors the variables to get encryption*/
new= ch | temp;
putchar(new);
}
}
