CC = g++
CFLAGS = -std=c++11 -Wall
all: main

main: main.o PieceSetter.o Board.o Pawn.o Piece.o PiecePositions.o Rook.o
	g++ -std=c++11 main.cpp PieceSetter.cpp Board.cpp Pawn.cpp Piece.cpp PiecePositions.cpp Rook.cpp -o main

main: main.o OBJS
	$(CC) $(CFLAGS) main.o <others>.o -o main

main.o: main.cpp <others>.h

<others.o>: <others>.cpp <others>.h 