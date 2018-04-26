CLANG++ = clang++
OBJ = main.o SortArithmetic.o BitTree.o CPPStack_.o
CXXFLAGS = -std=c++11

# Dir Variable
ARIDIR = CITest/Arigthmetic/
STRDIR = CITest/Structure/
DIR = CITest/

# build 

main: $(DIR)$(OBJ)
	$(CLANG++) $(CXXFLAGS) -o main $(DIR)$(OBJ) && ./main

main.o: $(DIR)main.cpp
	$(CLANG++) $(CXXFLAGS) -c main.cpp

SortArithmetic.o: $(ARIDIR)SortArithmetic.cpp $(ARIDIR)SortArithmetic.h
	$(CLANG++) $(CXXFLAGS) -c $(ARIDIR)SortArithmetic.cpp

BitTree.o: $(STRDIR)BitTree.cpp $(STRDIR)BitTree.h $(STRDIR)Defines.h
	$(CLANG++) $(CXXFLAGS) -c $(STRDIR)BitTree.cpp
	
CPPStack_.o: $(STRDIR)CPPStack_.cpp $(STRDIR)CPPStack_.h $(STRDIR)Defines.h
	$(CLANG++) $(CXXFLAGS) -c $(STRDIR)CPPStack_.cpp
	
clean:
	rm -rf $(DIR)*.o main
