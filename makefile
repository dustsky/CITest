CC = clang++

CXXFLAGS = -std=c++11

# Dir Variable
ARIDIR = CITest/Arigthmetic/
STRDIR = CITest/Structure/
DIR = CITest/
I = main.o SortArithmetic.o BitTree.o CPPStack_.o
COMPILEDIR = CITest/dist/
OBJ := $(addprefix $(COMPILEDIR), $(I))
# TEST := $(addprefix src/,foo bar)


exec: $(OBJ)
	$(CC) $(CXXFLAGS) -o main $(OBJ) && ./main
$(COMPILEDIR)%.o: $(DIR)%.cpp
	@[ -d $(COMPILEDIR) ] || mkdir $(COMPILEDIR)
	echo $^
	$(CC) $(CXXFLAGS) -c $^ -o $@
$(COMPILEDIR)%.o:$(ARIDIR)%.cpp
	$(CC) $(CXXFLAGS) -c $^ -o $@
$(COMPILEDIR)%.o:$(STRDIR)%.cpp
	$(CC) $(CXXFLAGS) -c $^ -o $@
# Success

clean:
	rm -rf main $(COMPILEDIR)
