#Makefile with some parts borrowed from debugging_gbd/eg1
# standard vars
CC = gcc
CFLAGS = -Wall
LDLIBS = -lm

# custom vars
target = ex02sqrt.x
cfile = ex02sqrt.c
test = ex02sqrt-test

$(target): $(cfile)
	$(CC) $(cfile) -o $@ $(LDLIBS)

test: 
	echo "Running test for 5"
	./$(target) 5
	
# tidy up
.PHONY: clean
clean:
	 $(RM) $(target)

