/*Richard Zhou*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main(int argc, char *argv[]){
        /*reads the file and turns it into an array*/
        FILE *pToFile = fopen(argv[3],"r");

        int i = 0;
        char arr[100];
        /*reads the file and makes it into an array*/
        while (!feof(pToFile)) {
                fgets(arr, 100, pToFile);
        }
        /*checks to make sure there are enough arguements*/
        if(argc < 3){
                return 0;
        }

        /*checks to see if the user wanted to make a BST from the input file*/
        if((strcmp(argv[1],"BST") == 0) &&(strcmp(argv[2],"file") == 0) && (strcmp(argv[3],"input.txt") == 0)){
                fileBST(arr);
        }
        /*checksto see if the use wanted to make a balanced BST from the file*/
        else if((strcmp(argv[1],"balancedBST") == 0) &&(strcmp(argv[2],"file") == 0) && (strcmp(argv[3],"input.txt") == 0)){
                        fileBalancedBST(arr);
        }
        /*If the user did not enter anything else, the machine will notify them*/
        else{
                printf("please enter valid command line arguements. The valid ones are balancedBST, BST, file, input, and input.txt");
        }

        return 0;
}

