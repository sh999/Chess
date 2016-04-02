CC = g++
LD = g++
MAIN = main
CFLAGS = -std=c++11 -Wall
OBJS = main.o UnitTest.o PieceSetter.o Board.o Pawn.o Piece.o Positions.o Rook.o 

# invoke rule all when make is run
# ensure $(MAIN) exisst (create main file because MAIN = main)
all: $(MAIN)

# create MAIN, or main executable, from OBJS (object files) 
#  using the linker, which takes the .o files and link to make executable
$(MAIN): $(OBJS)
	$(LD) $(OBJS) -o $(MAIN)

# how to make each object file
# make each object file by invoking compiler, which takes .cpp source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<
