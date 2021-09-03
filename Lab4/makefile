#Your name here

# Makefile for lab 1-4.

#change the last dependency for each new lab
all:  tags headers lab1

#this entry has to change for lab 2 - 4
# NEVER compile .c files with this rule - it lacks needed compile time flags
# There is an entry below that turns .c files into .o files
lab1Q5: lab1.o
	gcc -O3 -o $@ $^
lab1Q4: lab1.o
	gcc -O -o $@ $^
lab1: lab1.o 
	gcc -pg -O -o $@ $^
lab2: lab2.o encrypt.o
	gcc -O -pg -o $@ $^ 
lab3: fileBST.o fileBalancedBST.o insert.o delete.o print.o getMin.o createNode.o makeSortedArray.o createBalancedBST.o swap.o lab3.o
	gcc -O -pg $@ $^


#this is where you create an entry to build your zip file
#it will also update with new labs



#this entry stays for C code labs
tags: *.c
	ctags -R .

# this entry stays for C code labs
headers: *.c tags
	headers.sh


# this entry takes care of C files depending on header files
# It has the flags for compiling the c code
# It you don't like makefiles, consider typing the following line a few
# thousand times this semester and reconsider.
# Be sure that this one doesn't get an inserted line break anywhere
%.o:%.c *.h
	gcc -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -c -O -pg $< -o $@


