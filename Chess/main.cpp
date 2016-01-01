/*
 Tasks:
    Create vector of pieces in PiecePositions
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
    PiecePositions startingPosition("pppppppp");
    board.draw();
    startingPosition.sendPiecesToBoard(board);
//    Pawn p1("c2",BLACK);
//    p1.disp();
//    p1.posToSquare();

//    board.draw();
//    board.update(p1);
    board.draw();
    
    
    
}

