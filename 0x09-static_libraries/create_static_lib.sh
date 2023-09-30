#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a static library named liball.a from all the .o files
ar rc liball.a *.o
ranlib liball.a

# Clean up by removing the .o files
rm -f *.o

# Print a message indicating that the static library has been created
echo "Static library liball.a created from .c files in the current directory."

