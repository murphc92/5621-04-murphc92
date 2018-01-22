#Makefile with some parts borrowed from debugging_gbd/eg1
# standard vars
CC = gcc
CFLAGS = -Wall
LDLIBS = -lm

# custom vars
target = ex01numbers.x
cfile = ex01numbers.c
test = ex01numbers-test

$(target): $(cfile)
	$(CC) $(cfile) -o $@ $(LDLIBS)

test: 
	echo "Running test for numbers 1-5"
	./$(target) 5
	
# tidy up
.PHONY: clean
clean:
	 $(RM) $(target)

