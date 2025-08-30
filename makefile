# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo
	./zoo
# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
zoo: AnimalsInZoo.o Animal.o zoo.o
	g++ zoo.o Animal.o AnimalsInZoo.o -o zoo
	
# Compiles both the Animal.cpp file and Animal header file
Animal.o: Animal.cpp Animal.h
	g++ -Wall -Wextra -c Animal.cpp

#Compile both AnimalsInZoo File
AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h Animal.h Animal.cpp
	g++ -Wall -Wextra -c AnimalsInZoo.cpp

# Specify how the object files should be created from source files
zoo.o: zoo.cpp
	g++ -Wall -Wextra -c zoo.cpp
	

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o zoo
