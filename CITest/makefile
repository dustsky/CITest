CLANG++ = clang++
OBJ = main.o
# CFLAGS  = -I CITest

main: $(OBJ)
	$(CLANG++)  -o main $(OBJ) && ./main

main.o: main.cpp
	$(CLANG++) -c main.o
	
clean:
	rm -rf *.o main
