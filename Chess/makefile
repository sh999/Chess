CC = g++
LD = g++
PROG = main
CFLAGS = -std=c++11 -Wall
OBJS = main.o PieceSetter.o Board.o Pawn.o Piece.o PiecePositions.o Rook.o 

# invoke rule all when make is run
# ensure $(PROG) exisst (create main file because PROG = main)
all: $(PROG)

# create PROG, or main executable, from OBJS (object files) 
#  using the linker, which takes the .o files and link to make executable
$(PROG): $(OBJS)
	$(LD) $(OBJS) -o $(PROG)

# how to make each object file
# make each object file by invoking compiler, which takes .cpp source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $<
