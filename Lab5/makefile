#Richard Zhou

# Makefile for lab 1-4.

#change the last dependency for each new lab
all:  assembly

#this entry has to change for lab 2 - 4
# NEVER compile .c files with this rule - it lacks needed compile time flags
# There is an entry below that turns .c files into .o files
read7: read7.o
	gcc -g -o $@ $^
read8: read8.o
	gcc -g -o $@ $^
assemblye: lab5e.o
	gcc -g -o $@ $^
assembly: lab5.o
	gcc -g -o $@ $^
lab5e.o: lab5e.s
	gcc -g -c $^ -o $@
lab5.o: lab5.s
	gcc -g -c $^ -o $@
#this is where you create an entry to build your zip file
#it will also update with new labs

lab5.zip: makefile lab5.s lab5e.s test.input testShort.input testLong.input test.output testShort.output testLong.output readme
	zip lab5.zip makefile lab5.s lab5e.s test.input testShort.input testLong.input test.output testShort.output testLong.output readme

	# optional below here - remove old install folder
	rm -rf install
	# create install folder
	mkdir install
	# unzip to the install folder
	unzip lab5.zip -d install
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
	gcc -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c $< -o $@


