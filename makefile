CLANG++ = clang++
OBJ = main.o
# CFLAGS  = -I CITest
DIR = CITest/
main: $(DIR)$(OBJ)
	$(CLANG++) -o main $(DIR)$(OBJ) && ./main

main.o: $(DIR)main.cpp
	$(CLANG++) -c main.o
	
clean:
	rm -rf $(DIR)*.o main
