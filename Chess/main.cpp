/*
 Tasks:
    
 */
#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Board.h"
#include "PiecePositions.h"
using namespace std;

int main()
{
    Board board;
    // Use FEN-like notation to set starting positions
    // Below will create piece objects, but they won't be drawn on board yet
    PiecePositions startingPosition("rpppr");
    board.draw();
    // Puts created pieces on board
    startingPosition.sendPiecesToBoard(board);
    board.draw();
}

